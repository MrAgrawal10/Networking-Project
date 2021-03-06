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

# For TCP:
Access the directory containing the file
```
cd files
```

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
```
cd files
```
Compile and Run udpserver.cpp and udpclient.cpp using:

```
g++ udpserver.cpp -o udpserver.out
./udpserver.out 2000
```
```
g++ udpclient.cpp -o udpclient.out
./udpclient.out 2000
```


As the files run, you can send messages from client to server.


# Important Logic
TCP does Flow Control and requires three packets to set up a socket connection, before any user data can be sent. In UDP, the client does not form a connection with the server like in TCP and instead just sends a datagram.

# Additions to Project
Added Client-Server-Communication using UDP.

# Screenshots of the Work

**TCP**

![tcp2](https://user-images.githubusercontent.com/52610977/123784588-3a33ea00-d8f5-11eb-98bd-1fe3ec281ba2.png)
![tcp1](https://user-images.githubusercontent.com/52610977/123784652-46b84280-d8f5-11eb-94c5-6e674e6714e7.png)

**UDP**

![udp1](https://user-images.githubusercontent.com/52610977/123792897-c3035380-d8fe-11eb-9c08-e00dc98a07a5.png)
![1](https://user-images.githubusercontent.com/52610977/123792917-c991cb00-d8fe-11eb-8c6d-29dcc5944136.png)

