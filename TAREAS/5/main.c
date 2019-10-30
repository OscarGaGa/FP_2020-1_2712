#include<stdio.h>
#include<stdlib.h>
int valor(char n)//Esta funcion nos serivira para delvolver un numero de un caracter
{
	int z;
    switch(n)
    {
    	case'J':
    	case'Q':
    	case'K':
    		z=10;
    	break;
    	case'A':
    		z=11;
    	break;
	}
	return z;
}
int main(int argc, char* argu[])
{
	 int imprimir,
    coi;//que es lo mismo que int o char
    for(int i=1; i<argc; i++)//un for que empeice a recorrer la lista en el subindice 1
    {
        coi=argu[i][0]=='J'||argu[i][0]=='Q'||argu[i][0]=='K'||argu[i][0]=='A';
        if(coi==1)
        {
            imprimir=valor(argu[i][0]);
        }
        else
        {
            imprimir=atoi(argu[i]);
        }
        printf("%i\n", imprimir);
    }
    return 0;
}
