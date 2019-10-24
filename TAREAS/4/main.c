#include<stdio.h>
#include <stdlib.h>
int main(int argc, char*argv[])
{
	//Declaramos variables
	double x=0;
	
	//Utilizamos for para la repetición y convirtiendo los argumentos a float
	for(int i=1; i<argc; i++)
	{
		double y=atof(argv[i]);
		x=y+x;
	}
	
	//Hacemos el promedio
	double promedio=x/(argc-1);
	printf("%.2lf\n", promedio);
	
	return 0;
}
