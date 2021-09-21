#include <stdio.h>

int main() {
    int n, secuencia;
    printf("Ingrese el número de renglones: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            secuencia = (i+j)%2;
            printf("%d", secuencia);
        }
        printf("\n");
    }
}