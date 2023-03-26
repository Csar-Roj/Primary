#include <stdio.h>

#define PRICESUGAR 3
#define PRICECOFFEE 0.72

main()
{
    float euros,dolars,half,third,remainder_euros,remainder_dolars,sugar_kilos, coffee_kilos;
    printf("Ingrese la cantidad de euros:\n");
    scanf("%f",&euros);
    //Asumiendo que queremos convertir los euros a dolares antes de gastarlos, seria:
    dolars = euros*1.06;
    half = dolars/2;
    third = dolars/3;
    remainder_euros = (euros/2)/3;
    remainder_dolars = (dolars/2)/3;
    sugar_kilos = half/PRICESUGAR;
    coffee_kilos = third/PRICECOFFEE;
    printf("Se logran comprar %f kilos de azucar, %f kilos de cafe, y sobran %f euros (o %f dolares)", sugar_kilos, coffee_kilos, remainder_euros, remainder_dolars);
}