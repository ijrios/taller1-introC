#include <stdio.h>
#include <stdlib.h>

int main(void)
{ 
    
     int producto = 1;
     
     printf("\n Este programa calcula el producto de los enteros impares del 1 al 15 ");

    for ( int i = 1; i <= 15; i++ )
        {          
        if( i % 2 != 0 )
            producto *= i;
       }        
       
     printf("El producto es: %d",producto);

}


