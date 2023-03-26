#include <stdio.h>

main()
{
    int data;
    printf("Ingrese un numero entero");
    scanf("%d",&data);
    if((data)%2 == 0)
    {
        printf("ES PAR");
    }
    else
    {
        printf("ES IMPAR");
    }
}