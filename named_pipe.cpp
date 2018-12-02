#include<stdio.h>
#include<iostream>
#include<fcntl.h>
#include<sys/types.h>
#include<string.h>
#include<sys/stat.h>
#include<unistd.h>
using namespace std;
int main()
{
	int fd; 
        char * myfifo = "/tmp/myfifo";
	mkfifo(myfifo,0666); 
	char arr1[50],arr2[50];
	while(1)
	{ 
		fd=open(myfifo,W_RONLY);
		cout<<"ENTER STRING\n";
		fgets(arr2,50,stdin);
		write(fd,arr2,strlen(arr2)+1);
		close(fd); 
        	fd = open(myfifo, O_RDONLY); 
        	read(fd, arr1, sizeof(arr1)); 
  		printf("User2: %s\n", arr1); 
        	close(fd); 
    } 
    return 0;
	
}   
