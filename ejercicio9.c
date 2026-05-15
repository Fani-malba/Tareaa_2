#include <stdio.h>

void main()
{
   int n=0, i=0;
   printf("Ingrese el numero de la tabla:");
   scanf("%d", &n);
   
   for(i= 1; i<=10; i++)
   {
       printf("%d x %d = %d\n", n,i,n*i);
   }
} 
