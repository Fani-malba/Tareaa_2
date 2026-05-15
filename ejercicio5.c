#include <stdio.h>

void main()
{
   float m=0, p=0;
   printf("Ingrese el precio:");
   scanf("%f", &p);
   
   if(p>2500)
   {
       m=p*0.92;
   }
   
   printf("El monto final es:%f\n", m);
}
