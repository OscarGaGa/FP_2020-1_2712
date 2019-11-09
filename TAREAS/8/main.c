#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(int argc, char *argu[])
{
	float x, y, z;
	x=atof(argu[1]);
	y=atof(argu[2]);
	
	if(x==1)//mientras x sea 1 se convierten en grados C
	{
		z=(y-32)/1.8;
		printf("%.2f\n", z);
		return 0;
	}
	else if(x==0)//Si x vale 0 se convierten a grados F
	{
		z=32+(y*1.8);
		printf("%.2f\n", z);
		return 0;
	}
	return 0;
}
