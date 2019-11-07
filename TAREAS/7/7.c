#include <stdio.h>
#include <stdlib.h>
int main (int argc, char*argu[])
{
	int a;//declaramos varbiables
	int b;
	int c=1;
	a=atof(argu[1]);
	b=atof(argu[2]);
	for (int i=0; i<b; i ++)//decidimos donde lo vamos a guardar
	{
		c=c*a;
	}
	printf("%.2d\n", c);
	return 0;
}
