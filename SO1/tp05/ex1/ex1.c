#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
int main() {
	pid_t hijo;
	if((hijo=fork())<0) {
		perror("Error!\n");
		exit(EXIT_FAILURE);
	}
	printf("PPID: %d\n",getppid());
	printf("PID: %d\n",getpid());
	if(hijo==0) {
		char* args[] = {NULL};
		execv("./mipid", args);
		perror("Error!\n");
		exit(EXIT_FAILURE);
	}
	
	printf("Fin!\n");
	wait(NULL);
}
