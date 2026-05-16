#include <stdio.h>

void main() 
{
    int n=0, suma = 0;

    printf("Ingrese el tamaño del arrgelo? ");
    scanf("%d", &n);

    int vec[n]; 

    printf("Ingresa los números para el arreglo \n");
    
    for(int i = 0; i < n; i++) 
    {
        printf("Número %d: ", i + 1);
        scanf("%d", &vec[i]); 
    }
    for(int i = 0; i < n; i++) 
    {
        suma = suma + vec[i];
    }

    printf("\nLa suma de todos los elementos es: %d\n", suma);
}
