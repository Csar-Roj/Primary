#include <stdio.h>

main()
{
    int v1, v2;
    printf("Ingrese el valor de v1:\n");
    scanf("%d",&v1);
    printf("Ingrese el valor de v2:\n");
    scanf("%d",&v2);
    v1 = v1+v2;
    v2 = v1-v2;
    v1 = v1-v2;
    printf("El valor de v1 es %d y el valor de v2 es %d ", v1, v2);
}