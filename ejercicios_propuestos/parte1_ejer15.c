#include<stdio.h>

int main (void)
{
  int a = 1, b = 0, i, x;
  printf("Ingrese la cantidad de series que desea mostrar: \n");
  scanf("%d", &x);

  for(i = 0; i < x; i++){
    printf("%d\n",b);
    printf("%d\n",a);
    b = b + a;
    a = a + b;
  }
  return 0;
}