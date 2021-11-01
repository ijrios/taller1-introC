#include <stdio.h>
#include <math.h>

int factorial(int numero);
float suma(int x, int terminos);

int main() {

    int x, terminos;
    
    printf("\n Ingrese el valor de entrada de x: ");
    scanf("%d", &x);
	
    printf("\n Ingrese el numero de terminos: "); 
    scanf("%d", &terminos);
	
    printf("\n El resultado de la suma de las series es: %f \n", suma(x, terminos));
	
}

int factorial(int numero){
    int resultado = 1;
    for(int i = 1; i <= numero; i++){
        resultado = resultado*i;
    }
    return resultado;
}

float suma(int x, int terminos) {

        int signo = 1, y = 2;
        double formula;
    	float suma = 1;

	for (int i = 1; i < terminos; i++) {
           signo = -1 * signo;
           formula = signo * (pow(x, y))/factorial(y);
	   suma = suma + formula;
           y = y + 2;
	}
	return suma;
}

