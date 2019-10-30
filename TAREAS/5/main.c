#include<stdio.h>
#include<stdlib.h>
int valor(char n)
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
    coi;
    for(int i=1; i<argc; i++)
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
