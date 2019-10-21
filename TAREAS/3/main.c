#include<stdio.h>
#include <stdlib.h>
int main(int argc, char*argv[])
{
	double x, y;
	x=atof(argv[1]);
	y=atof(argv[2]);
	
	printf("%.2lf\n", x+y);
	printf("%.2lf\n", x-y);
	printf("%.2lf\n", x*y);
	printf("%.2lf\n", x/y);
	
	return 0;
}
