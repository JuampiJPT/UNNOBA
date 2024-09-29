#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
int main(){

	pid_t PPID = getpid();
	for(int i=0;i<15;i++){
		if(PPID == getpid()){
			fork();
		}
	
	}
	if(getpid()==PPID){
		for(int i=0;i<15;i++){
			wait(NULL);
		}
		printf("Mi PID es: %d\n",getpid());
	}else{
		printf("Mi PID es: %d, mi PPID: %d•\n",getpid(),getppid());
	}
	return 0;

}
