#include<stdio.h>
#include<stdlib.h>
int saludos(int personas){
	int total, saludo;//saludo son los saludos tptales de una persona y total la sumatoria de los saludos
	saludo=personas-1;
	if(saludo==0){//cuando sea una persona seran 0 saludos
		return saludo;
	}
	total=saludo+saludos(personas-1);//se hace la sumatoria de saludos
	return total;
}
int main(int argc, char*argu[]){
	int resultado, personas;
	personas=atoi(argu[1]);
	resultado=saludos(personas);
	printf("%i\n", resultado);
	return 0;
}
