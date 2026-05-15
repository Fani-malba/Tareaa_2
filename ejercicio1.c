#include <stdio.h>
void main ()
{
  int a=0, b=0, res=0, sum=0, mul=0;

    printf("Ingrese un numero: ");
    scanf("%d", &a);
    
    printf("Ingrese un numero: ");
    scanf("%d", &b);
   
    
    sum=a+b;
    res=a-b;
    mul=a*b;
    
    printf("La suma es %d\n", sum );
    printf("La resta es %d\n", res);
    printf("La multiplicacion es %d\n", mul);
}
