#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
	pid_t p;
	p = fork();
	if (p == 0)
	{
		sleep(5);
		printf("I am a child with id=%d\n", getpid());
		printf("My parent id=%d\n", getppid());
	}
	else
	{
		printf("I am a parent with id=%d\n", getppid());
		printf("My  child id=%d\n", p);
	}
}