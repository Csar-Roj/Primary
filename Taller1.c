#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n, evens = 0, odds = 0, zeros = 0, primes = 0;
    int i, num;
    printf("Cuantos numeros desea leer?:\n");
    scanf("%d", &n);
    while(n <= 0)
    {
        printf("Seleccion invalida, seleccione un numero mayor que 0:\n");
        scanf("%d", &n);
    }
    for(i = 0; i < n; i++)
    {
        printf("Ingrese un numero entero:\n");
        scanf("%d",&num);
        //Par o Impar:
        if(num%2 == 0)
        {
            evens++;
        }
        else
        {
            odds++;
        }

        //Contar los Ceros:
        int k = num;
        int digit;
        digit = k%10;
        k = k/10;
        if(digit == 0)
        {
            zeros++;
        }
        while(k/10 != 0)
        {
            digit = k%10;
            k = k/10;
            if(digit == 0)
            {
                zeros++;
            }
        }

        //¿Es primo?
        if(num > 1)
        {
            bool primo = false;
            int p = 2;
            while(primo == false && p != num)
            {
                if(num%p == 0)
                {
                    primo = true; 
                }
                p++;
            }
            if(primo == true)
            {
                primes++;
            }
        }
    }
    printf("Hay %d numeros pares, %d numeros impares, %d ceros y %d numeros primos", evens, odds, zeros, primes);
    return 0;
}