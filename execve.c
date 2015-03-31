#include<unistd.h>

int main()
{
	fork();
	char* path="/sbin/init";
	char* argv[]={"ps","-aux",NULL};
	char* envp[]={"PATH=/temp","USER=hzr",NULL};
	if(execve(path,argv,envp)<0)
		perror("execve");
	return 0;
}
