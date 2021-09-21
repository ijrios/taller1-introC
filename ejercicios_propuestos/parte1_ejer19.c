#include <stdio.h>
#include <math.h>

double progresion(double x, double n);

int main() {

    double x,n,p;
    printf("Ingrese el valor de x: ");
    scanf("%lf", &x);
    printf("Ingrese el valor de n: ");
    scanf("%lf", &n);
    p = progresion(x, n);
    printf("La suma de la progresión geométrica es: %.2lf \n", p);
   
}
    
double progresion(double x, double n)
   {
    double resultado = 0;
    for(int i = 0; i <= n; i++){
       resultado = resultado + pow(x, i);
    }
    return resultado;
  }