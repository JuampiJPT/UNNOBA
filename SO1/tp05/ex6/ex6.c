#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
int main(){
	if(fork()==0){
		printf("Soy: %d, mi padre es: %d, voy a dormir zzz\n", getpid(), getppid());
		sleep(5);
		printf("Soy: %d, mi padre es: %d, me desperte :)\n", getpid(),getppid());
	}else{
		
		wait(NULL);
		printf("Soy: %d, ell padre, mi hijo murio.\n", getpid());
	}
	return 0;
}
