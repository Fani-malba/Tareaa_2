#include <stdio.h>
void main() 
{
    int vec[100],  numpar = 2;
    
    for(int i = 0; i < 100; i++) 
    {
        vec[i] = numpar;
        numpar = numpar + 2; 
    }

    printf("Los primeros 100 numeros pares son:\n");
    
    for(int i = 0; i < 100; i++) 
    {
        printf("%d ", vec[i]);
    }
}
