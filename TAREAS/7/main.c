#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[])//Son los parametros que nos permitirán meter la base y el exponente que queremos aumnetar
{
    int b= atoi(argv[1]);//Es para la base
    int e= atoi(argv[2]);//Es para el exponente
    int p= pow(b,e);
    printf("%i\n", p);
    return 0;
}
