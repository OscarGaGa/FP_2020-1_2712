#include <stdio.h>
#include <stdlib.h>
int main(int argc, char*argv[])
{
	double x, y;
	x=atof(argv[1]);
	y=atof(argv[2]);
	
	printf("La sema es %g\n", x+y);
	printf("La resta es %g\n", x-y);
	printf("La multiplicaci�n es %g\n", x*y);
	printf("La divisi�n es %.2lf\n", x/y);
	
	return 0;
}
