#include<stdio.h>
#include<stdlib.h>
double raiz(double num, double tolerancia, double resultado){//funcion llamada raiz
	double division, diferencia;
	division=num/resultado;
	diferencia=resultado-division;
	diferencia=diferencia>0? diferencia:-diferencia;//diferencia es valor absoluto
	if(diferencia<=tolerancia){
		return resultado;
	}
	else{
		resultado=(resultado+division)/2;
		return raiz(num, tolerancia, resultado);//vuelve con un nuevo candidato
	}
}
int main(int argc, char *argu[]){
	double num, tolerancia, resultado;
	num=atof(argu[1]); tolerancia=atof(argu[2]); resultado=atof(argu[3]);//argumentos
	resultado=raiz(num, tolerancia, resultado);
	printf("%lf\n", resultado);
}
