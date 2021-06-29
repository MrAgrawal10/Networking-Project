# Networking-Project


# Introduction
The project is related to networking between a server and a client using UDP and TCP protocols.

**Transmission Control Protocol (TCP)**: Establishes a two-way connection between a server and a single client. Provides reliable byte stream transmission of data with error checking and correction, and message acknowledgement.

**User Datagram Protocol (UDP)**: Provides two-way message transfer between a server and a large number of clients. UDP is not connection-based; each data packet transmission is an independent event. Provides fast and lightweight data transmission for local packet broadcasts and remote multicasting. Inherently less reliable than TCP. Does not provide message acknowledgement.
**Socket**: A socket is a programming interface and communication endpoint that is used for connecting to other computers, sending, and receiving data from them.

# Tech Stack
Basics of Socket programming in TCP and UDP are used. 
IN TCP, it involves the creation of a socket, binding it to the port, waiting for client to send a request , then accepting it, and then send and receive the messages. 
In UDP, it is not needed to accept the request for sending messages.

# How to Run
Compile the Files in the Ubuntu Windows App. Open Two Different Ubuntu Terminals.

# For TCP
Access the directory containing the file

Compile and Run the tcpserver.cpp and tcpclient.cpp files using:

```
g++ tcpserver.cpp -o tcpserver.out
./tcpserver.out 2000
```
```
g++ tcpclient.cpp -o tcpclient.out
./tcpclient.out localhost 2000
```

# For UDP: 
Access the directory containing the file

Compile and Run udpserver.cpp and udpclient.cpp using:

```
g++ udpserver.cpp -o udpserver.out
./udpserver.out 2000
```
```
g++ udpclient.cpp -o udpclient.out
./udpclient.out localhost 2000
```


As the files run, you can send messages from client to server.


# Important Logic
TCP does Flow Control and requires three packets to set up a socket connection, before any user data can be sent. In UDP, the client does not form a connection with the server like in TCP and instead just sends a datagram.

# Additions to Project
Added Client-Server-Communication using UDP.

# Screenshots of the Work
