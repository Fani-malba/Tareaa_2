#include <stdio.h>

void main()
{
   float sf=0, s=0;
   printf("Ingrese monto de sueldo:");
   scanf("%f", &s);
   
   if(s<1000)
   {
       sf=s*1.15;
   }
   else
   {
       sf=s*1.12;
   }
   printf("El monto de sueldo es:%f\n",sf);
}
