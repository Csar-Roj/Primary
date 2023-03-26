#include <stdio.h>

main()
{
    int seconds, minutes, hours, total;
    printf("Ingrese los segundos, minutos y horas, en ese orden:\n");
    scanf("%d",&seconds);
    scanf("%d",&minutes);
    scanf("%d",&hours);
    total = (hours*3600) + (minutes*60) + seconds;
    printf("Han pasado %d segundos desde la hora 0:0:0", total);
}