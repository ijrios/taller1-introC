#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float x;
    printf("Este programa imprime números en notación cientifica.\n");
    printf("Escriba el número que desea convertir: ");
    scanf("%f", &x);
    
    printf("El valor de %f en notación cientifica es %E \n", x,x);
  
}