#include <stdio.h>

main()
{
    float exam1,exam2,exam3,medium;
    printf("Ingrese, en orden, la nota de los tres examenes:\n");
    scanf("%f", &exam1);
    scanf("%f", &exam2);
    scanf("%f", &exam3);
    medium = (exam1+exam2+exam3)/3;
    printf("La nota media de los tres examenes es:%f", medium);
}