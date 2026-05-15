#include <stdio.h>
void main ()
{
    float c=0, i=0, t=0;
    
    printf("Ingrese la cantidad de dinero: ");
    scanf("%f", &c);
    
    printf("Ingrese la tasa de interes: ");
    scanf("%f", &i);
    
    t = c * (1 + (i / 100));
    
    printf("El monto final es:%f\n", t);
}
