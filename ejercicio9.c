#include <stdio.h>

main()
{
    float dolars, euros;
    printf("Ingrese la cantidad de dolares:\n");
    scanf("%f",&dolars) ;
    euros = dolars*0.95;
    printf("En euros, eso es %f ", euros);
}