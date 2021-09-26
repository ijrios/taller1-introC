#include <stdio.h>
#include <stdlib.h>

int main(void)
{ 
      int x, y, z;

      printf("\n Este programa encuentra el menor de varios enteros\n");
      printf("\n Especifique el número de valores restantes: \n");
      scanf("%d",&x);
      printf("\n Por favor introduzca el primer numero: \n");
      scanf("%d",&z);
      
     for( int i = 2; i <= x; i++ )
        {    

        printf("\nPor favor introduzca el numero entero:\n");
        scanf("%d",&y);
          
            
         if ( y < z )
          z = y;

         }     
     
      printf("\n El menor de los %d numeros es: %d\n", x, z);
         
}
