#include <stdio.h>

main()
{
    int n, females=0, males=0, old=0, young=0, discount15=0, discount30=0, i;
    int cyear;
    printf("¿Que año es hoy?:\n");
    scanf("%d",&cyear);
    printf("¿Cuantos pacientes desea ingresar?:\n");
    scanf("%d", &n);
    while(n <= 0)
    {
        printf("Seleccion invalida, introduzca un numero mayor que 0:");
    }

    for(i = 0; i < n; i++)
    {
        int year, id, gender, age;
        printf("Ingrese el año en que nacio:\n");
        scanf("%d",&year);
        age = cyear-year;
        while(age < 0)
        {
            printf("No puede haber nacido en el futuro. Intente de nuevo:\n");
            scanf("%d",&year);
            age = cyear-year;
        }

        printf("Ingrese su cedula de identidad:\n");
        scanf("%d",&id);

        printf("Ingrese 0 si es hombre, 1 si es mujer:\n");
        scanf("%d",&gender);
        while(gender < 0 || gender > 1)
        {
            printf("Seleccion invalida, intente de nuevo:\n");
            scanf("%d",&gender);
        }

        if(gender == 0)
        {
            males++;
        }
        else
        {
            females++;
        }

        if(age >= 18)
        {
            old++;
        }
        else
        {
            young++;
        }

        if((id%10)%2 == 0 && gender == 1)
        {
            discount15++;
        }
        if(age > 60)
        {
            discount30++;
        }
    }

    printf("Hay %d pacientes femeninos, %d pacientes masculinos, %d pacientes mayores de edad y %d pacientes menores de edad.\n", females, males, old, young);
    printf("Adicionalmente, hay %d pacientes con descuento del 30\%, y %d pacientes con descuento del 15\%.");
}