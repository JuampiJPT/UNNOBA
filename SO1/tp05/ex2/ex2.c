#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
int main() {

	pid_t pidP = getpid();
	pid_t hijo1, hijo2, hijo3, subhijo1, subhijo2;

	hijo1 = fork();
	if(hijo1 == 0){
		subhijo1=fork();
		if(subhijo1==0){
			subhijo2=fork();
		}
	}else{
		hijo2=fork();
		if(hijo2!=0){
			hijo3=fork();	
		}
	}
	if(getpid()==pidP){
		printf("Soy el padre: %d\n",getpid());
	}else{
		printf("Soy el hijo: %d, mi padre es: %d\n",getpid(),getppid());
	}
	wait(NULL);
}
