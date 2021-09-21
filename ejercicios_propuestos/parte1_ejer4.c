#include <stdio.h>
#include <stdlib.h>
float conversion(float x);
int main(void)
{
    float n,m,c,up;
    char nom[20];

    printf("Ingrese la velocidad de descarga en megabits por segundo (Mbps):\n");
    scanf("%f", &n);
    printf("Ingrese el tamaño del archivo en Megabytes (MB):\n");
    scanf("%f", &m);

    c = conversion(m);
    up = c/n;
    printf("A %.2f megabits por segundo, un archivo de: %.2f se descarga en: %.2f",n, m,up);

    exit(EXIT_SUCCESS);
}

float conversion(float x) {
    float r = 8*x;
  return r;
}
