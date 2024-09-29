#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main()
{
	fork();
	fork();
	fork();
	printf("hola\n");
	return 0;
}
