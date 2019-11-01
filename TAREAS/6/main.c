#include <stdio.h>
#include <stdlib.h>
int main(int argc, char*argv[])
{
	int s=1;
	int r, j, k;//variables que vamos a utilizar
	for(int i=1; i<argc; i++)//aqui comienzan a mostrarse
	{
		j=atoi(argv[i]);
		s=s*j;
	}
	for(int w=1; w<argc; w++)//aqui se empiezan a checar
	{
		k=atoi(argv[w]);
		r=s/k;
		printf("%i\n", r);
	}
	return 0;
}


