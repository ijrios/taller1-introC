#include <stdio.h>
#include <stdlib.h>

int main()
{
  int x;
  int contador = 1;

  printf("Introduzca cinco enteros entre 1 y 30 y se imprimira un histograma.\n");
  
  while (contador <= 5)
      { 
       
   printf("Por favor introduzca el numero %d: ", contador);
   scanf("%d",&x);

     if ((30 >= x))
         {    
     for ( int i = 1; i <= x; i++ )
      printf("*");
      printf("\n");
      contador = contador+1;
         }     
    } 
   exit(EXIT_SUCCESS);
}
