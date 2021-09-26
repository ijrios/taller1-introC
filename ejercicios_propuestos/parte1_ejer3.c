#include <stdio.h>
#include <stdlib.h>

double conversion(int x);

int main(void)
{
    int n;
    double m;
    char nom[20];

    printf("Escribe su altura en (cm):\n");
    scanf("%d", &n);
    printf("Escribe su nombre:\n");
    scanf("%s", &nom);

    m = conversion(n);
    printf("%s usted tiene una altura de: %f metros",nom, m);

    exit(EXIT_SUCCESS);
}

double conversion(int x) {
    double r = (x/100.0);
  return r;
}