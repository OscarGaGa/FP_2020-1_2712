#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char *argu[]){
	int numeroD;
	numeroD=strlen(argu[1]);//strlen para saber cuantos digitos tiene
	char arguc[numeroD];
	int resultado=0;//empieza con el neutro aditivo
	int digitos[numeroD];
	for(int i=0; i<numeroD;i++){//se suman los caracteres
		arguc[i]=argu[1][i];
		digitos[i]=atoi(&arguc[i]);
		resultado=resultado+digitos[i];//se suman por separado
	}
	printf("%i\n", resultado);
	return 0;
}
