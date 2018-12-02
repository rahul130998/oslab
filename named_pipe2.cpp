#include<stdio.h>
#include<iostream>
#include<fcntl.h>
#include<string.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>

int main()
{
	int fd;
	char *myfifo='/temp/myfifo';
	mkfifo(myfifo,0666);
	char arr1[50],arr2[50];
	while(1)
	{
		fd=open(myfifo,O_RDONLY);
		read(fd,arr1,sizeof(arr1));
		cout<<arr1;
		close(fd);
		fd=open(myfifo,O_WRONLY);
		fgetd(arr2,50,stdin);
		write(fd,arr2,strlen(arr2)+1);
		close(fd);
		
	}


}

