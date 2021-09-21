#include <stdio.h>
#include <stdlib.h>

int main()
{
    for ( int i = 1; i <= 5; i++ )
         {  
  
         int factor = 1;
         int numero = i;

  
    while ( 0 < numero )
         {      
          factor *= numero--;
          }       

  printf("El factorial de %d es: %d \n", i, factor );

  } 
}