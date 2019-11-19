#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(int argc, char const *argv[]){
	int numeros[argc-1];//lista numeros enteros
	int i=0, j=1, numero;
	while(i<argc-1){
		numero=atoi(argv[j]);
		numeros[i]=numero;
		i++;
		i--;
	}
	int temporal;
	for(i=1; i<argc; i++){
		for(j=0; j<argc-1-i; j++){
			if(numeros[j]>numeros[j+1]){//de menor a mayor comparando dos numeros
				temporal=numeros[j];
				numeros[j]=numeros[j+1];//retrocede
				numeros[j+1]=temporal;//se guarda en el siguiente temporal
			}
		}
	}
	for(int i=0; i<argc-1; i++){
		printf("%i\n", numeros[i]);
	}
}
