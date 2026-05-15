#include <stdio.h>
void main ()
{
    float pi=3.1416, r=0, area=0, cir=0;
 
    printf("Ingrese radio del circulo: ");
    scanf("%f", &r );
 
    area=r*2*pi;
    cir=2*pi*r;

    printf("El area del circulo es:%f\n", area);
    printf("La circunferencia es:%f\n", cir);
    
}
