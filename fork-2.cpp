#include  <stdio.h>
#include  <iostream>
#include  <unistd.h>
#include  <sys/types.h>

#define   MAX_COUNT  2

void  ChildProcess(void)
{
     int   i;

     for (i = 1; i <= MAX_COUNT; i++)
          printf("   This line is from child, value = %d %d %d \n", i,getpid(),getppid());
     printf("   *** Child process is done ***\n");
}

void  ParentProcess(void)
{
     int   i;

     for (i = 1; i <= MAX_COUNT; i++)
          printf("   This line is from parent, value = %d %d %d \n", i,getpid(),getppid());
     printf("*** Parent is done ***\n");
}

int main()
{
 	
    pid_t pid;
     
    pid = fork();
    if(pid == 0 )
	ChildProcess();
    else
	ParentProcess();

    return 0;
}


