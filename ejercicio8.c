
#include <stdio.h>

void main()
{
   int a=0, b=0;
   printf("Ingrese un numero:");
   scanf("%d", &a);
   printf("Ingrese otro numero:");
   scanf("%d", &b);
   
   if (a!= 0)
   {
        if(b%a == 0)
        {
            printf("%d  si es divisor de %d\n", a, b);
        }
        else
        {
          printf("%d  no es divisor de %d\n", a, b);  
        }
   }
    else 
    {
        printf("No se puede dividir entre cero.\n");
    }
}
