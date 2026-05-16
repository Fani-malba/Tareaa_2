#include <stdio.h>

void main() 
{
    int i, num;
    int pos = 0, neg = 0, cero = 0; 

    for (i = 1; i <= 3; i++) 
    {
        printf("Ingrese el numero %d: ", i); 
        scanf("%d", &num);

        if (num > 0) 
        {
            pos = pos + 1;
        } 
         else 
        {
            if (num < 0) 
            {
                neg = neg + 1;
            } 
            else 
            {
                cero = cero + 1;
            }
        }
    }
    
    printf("Hay %d numeros positivos\n", pos);
    printf("Hay %d numeros negativos\n", neg);
    printf("Hay %d numeros nulos\n", cero);
}
