#include <unistd.h>
#include <stdio.h>
int main() 
{
	printf("PPID %d", getppid());
	sleep(5);
	printf("PID: %d PPID: %d\n", getpid(), getppid());
	return 0;
}
