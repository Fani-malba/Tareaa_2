#include <stdio.h>
void main() 
{
    int n = 0, i = 0, f = 1; 

    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &n);

    while (n <= 0) 
    {
        printf("Error, el numero debe ser mayor a cero.\n");
        printf("Ingrese un numero entero positivo: ");
        scanf("%d", &n);
    }
    for (i = 1; i <= n; i++) 
    {
        f = f * i; 
    }

    printf("El producto de los primeros %d numeros es: %d\n", n, f);
}
