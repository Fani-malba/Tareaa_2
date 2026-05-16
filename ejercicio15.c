#include <stdio.h>
void main() 
{
    int n=0, pos= 0, neg= 0, nulos = 0;

    printf("Ingresa el tamaño del arreglo:  ");
    scanf("%d", &n);

    int vec[n];

    printf("Ingresa los números \n");
    
    for(int i = 0; i < n; i++) 
    {
        printf("Número %d: ", i + 1);
        scanf("%d", &vec[i]);
    }

    for(int i = 0; i < n; i++) 
    {
        
        if(vec[i] > 0) 
        {
            pos= pos+ 1;
        }
        
        if(vec[i] < 0) 
        {
            neg= neg+ 1;
        }
        
        if(vec[i] == 0) 
        {
            nulos = nulos + 1;
        }
    }

    printf("\n--- Resultados ---\n");
    printf("Cantidad de positivos: %d\n", pos);
    printf("Cantidad de negativos: %d\n", neg);
    printf("Cantidad de nulos: %d\n", nulos);
}
