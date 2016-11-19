package com.apache.airavata.user.profile.server;

import org.apache.airavata.common.utils.IServer;
import org.apache.airavata.common.utils.ServerSettings;
import org.apache.airavata.userprofile.crude.cpi.UserProfileCrudeService;
import org.apache.thrift.server.TServer;
import org.apache.thrift.server.TThreadPoolServer;
import org.apache.thrift.transport.TServerSocket;
import org.apache.thrift.transport.TServerTransport;
import org.apache.thrift.transport.TTransportException;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

import java.net.InetSocketAddress;
import java.util.Date;

/**
 * Created by abhij on 11/11/2016.
 */
public class UserProfileServer implements IServer {

    private final static Logger logger = LoggerFactory.getLogger(UserProfileServer.class);

    private static final String SERVER_NAME = "User Profile Server";
    private static final String SERVER_VERSION = "1.0";

    private IServer.ServerStatus status;
    private TServer server;

    public UserProfileServer() {
        setStatus(IServer.ServerStatus.STOPPED);
    }

    public void updateTime() {

    }

    public Date getTime() {
        return null;
    }

    public String getName() {
        return SERVER_NAME;
    }

    public String getVersion() {
        return SERVER_VERSION;
    }

    public void start() throws Exception {


        try {
            setStatus(ServerStatus.STARTING);
            final int serverPort = Integer.parseInt(ServerSettings.getUserProfileServerPort());
            final String serverHost = ServerSettings.getUserProfileServerHost();
            UserProfileCrudeService.Processor processor = new UserProfileCrudeService.Processor(new UserProfileHandler());

            TServerTransport serverTransport;

            if (serverHost == null) {
                serverTransport = new TServerSocket(serverPort);
            } else {
                InetSocketAddress inetSocketAddress = new InetSocketAddress(serverHost, serverPort);
                serverTransport = new TServerSocket(inetSocketAddress);
            }
            TThreadPoolServer.Args options = new TThreadPoolServer.Args(serverTransport);
            options.minWorkerThreads = 30;
            server = new TThreadPoolServer(options.processor(processor));

            new Thread() {
                public void run() {
                    server.serve();
                    setStatus(ServerStatus.STOPPED);
                    logger.info("Credential store Server Stopped.");
                }
            }.start();
            new Thread() {
                public void run() {
                    while (!server.isServing()) {
                        try {
                            Thread.sleep(500);
                        } catch (InterruptedException e) {
                            break;
                        }
                    }
                    if (server.isServing()) {
                        setStatus(ServerStatus.STARTED);
                        logger.info("Starting Credential store Server on Port " + serverPort);
                        logger.info("Listening to Credential store clients ....");
                    }
                }
            }.start();
        } catch (TTransportException e) {
            setStatus(ServerStatus.FAILED);
            throw new Exception("Error while starting the credential store service", e);
        }
    }

    public void stop() throws Exception {

        if (server!=null && server.isServing()){
            setStatus(ServerStatus.STOPING);
            server.stop();
        }
    }

    public void restart() throws Exception {

        stop();
        start();
    }

    public void configure() throws Exception {

    }

    public ServerStatus getStatus() throws Exception {
        return status;    }

    private void setStatus(IServer.ServerStatus stat){
        status=stat;
        status.updateTime();
    }

    public TServer getServer() {
        return server;
    }

    public void setServer(TServer server) {
        this.server = server;
    }

    public static void main(String[] args) {
        try {
            new UserProfileServer().start();
        } catch (Exception e) {
            logger.error(e.getMessage(), e);
        }
    }
}
