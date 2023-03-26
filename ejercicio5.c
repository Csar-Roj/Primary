#include <stdio.h>

main()
{
    float arista, volume;
    printf("Ingrese la arista del cubo:\n");
    scanf("%f",&arista);
    volume = arista*arista;
    printf("El volumen del cubo es:%f", volume);
}