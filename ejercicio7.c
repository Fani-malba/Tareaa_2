#include <stdio.h>

void main()
{
   float p=0, e=0, r=0, dt=0;
   printf("Ingrese la distancia de ida:");
   scanf("%f", &r);
   printf("Ingrese el tiempo de estancia:");
   scanf("%f", &e);
   
    dt=r*2;
    p=dt*0.23;
    
    if(e>7)
   {
       if(dt>800)
       {
           p=p*0.70;
       }
   }
   
   printf("El precio final :%f\n", p);
}
