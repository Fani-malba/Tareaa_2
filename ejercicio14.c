#include <stdio.h>

void main() 
{
    int n=0, cont = 0;

    printf("Ingrese el tamaño del arreglo:");
    scanf("%d", &n);

    int vec[n];

    printf("Ingrese los números del arreglo:\n");
    
    for(int i = 0; i < n; i++) 
    {
        printf("Número %d: ", i + 1);
        scanf("%d", &vec[i]);
    }

    int numbus;
    printf("\n¿Qué número quieres buscar dentro del arreglo? ");
    scanf("%d", &numbus);

    for(int i = 0; i < n; i++) 
    {
        if(vec[i] == numbus) 
        {
            cont = cont + 1;
        }
    }
    printf("\nEl número %d se encontró %d veces en el arreglo.\n", numbus, cont);
}
