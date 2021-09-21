#include <stdio.h>

int main (void)
{
    int n, producto;
    printf("Numero final (empezando de 1): ");
    scanf("%d", &n);
    printf("\n Tabla de multiplicacion desde 1 hasta %d :\n",n);
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <=10; j++){
            producto = i*j;
            printf("%dx%d = %d ",i,j,producto);
            printf("\n");
        }
        printf("\n");
    }
}