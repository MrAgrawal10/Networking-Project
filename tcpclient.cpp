#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<bits/stdc++.h>
#include<unistd.h>
#include<netdb.h>
#include<sys/time.h>
#include<sys/wait.h>
using namespace std;

int main(int argc, char *argv[])
{
	if(argc != 3)
	{
		cerr << "Missing hostname and port number\n";
		exit(0);
	}
	
	char *serverName=argv[1];
	int port=atoi(argv[2]);
	
	char msg[2500];
	
	//declare clientSocket and retrieve details for host
	struct hostent* host=gethostbyname(serverName);
	sockaddr_in clientSocket;
	clientSocket.sin_family=AF_INET;
	clientSocket.sin_port=htons(port);
	clientSocket.sin_addr=**(struct in_addr **)host->h_addr_list;
	
	
	//socket() call to get file descriptor
	int clientSocketID=socket(AF_INET,SOCK_STREAM,0);
	
	
	//connect() to the remote address
	int status=connect(clientSocketID,(sockaddr *)&clientSocket,sizeof(clientSocket));
	if(status<0)
	{
		cout<<"Error connecting\n";
		exit(0);
	}
	
	
	//start sending and receiving messages
	while(1)
	{
		string data;
		cout<<"Client: ";
		getline(cin,data);
		strcpy(msg,data.c_str());
		if(data=="exit")
		{
			cout<<"Connection terminated";
			break;
		}
		send(clientSocketID,msg, sizeof(msg), 0);
		cout<<"Server: ";
		recv( clientSocketID,msg, sizeof(msg), 0);
		if(!strcmp(msg,"exit"))
		{
			cout<<"Connection terminated";
			break;
		}
		cout<<msg<<endl;
	}
	close(clientSocketID);
}

