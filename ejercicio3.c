#include <stdio.h>
void main()
{
    float cp=0, d=0, p=11.96;
    
    printf("Ingrese el monto en dolares: ");
    scanf("%f", &d);
    
    cp=d*p;
    
    printf("El monto en pesos es:%f\n", cp);
}
