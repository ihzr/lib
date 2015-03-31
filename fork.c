#include<sys/types.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{
	pid_t result;
	printf("Father is PID %d\n",getpid());
	result=fork();
	printf("The result for fork() is %d\n",result);
	printf("The child is PID %d\n",getpid());
	return 0;
}
