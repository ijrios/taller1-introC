#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n1, n2, mayor, menor;
    printf("Este programa recibe dos enteros y verifica si uno es multiplo del otro.\n");
    printf("Por favor introduzca el primer numero:\n");
    scanf("%d", &n1);
    printf("Por favor introduzca el segundo numero:\n");
    scanf("%d", &n2);
    mayor = n1;
    menor = n2;
    
     if ( n2 > n1 )
          {        
         mayor = n2;
         menor = n1;
          }        

     if (0 == mayor % menor){
      printf("\n El numero %d es multiplo del numero %d \n", mayor, menor);
     
     }
      else if (0 != mayor % menor){
      printf("\n Los numeros no son multiplos.");
 
      }

    exit(EXIT_SUCCESS);
}
