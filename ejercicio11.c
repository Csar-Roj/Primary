#include <stdio.h>

main()
{
    int num1,num2,num3;
    printf("Ingrese tres numeros:");
    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%d",&num3);
    if(num1 >= num2 && num1 >= num3)
    {
        printf("%d es el numero mayor ", num1);
    }
    else if(num2 >= num3)
    {
        printf("%d es el numero mayor ", num2);
    }
    else
    {
        printf("%d es el numero mayor ", num3);
    }
}