#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   
   
    int cont = 1;
    printf("     1     10*N  100*N 1000*N\n");
 
     while ( 5 >= cont)
       { 
    printf("%6d %6d %6d %6d\n", cont, 10*cont, 100*cont, 1000*cont++);
       } 
 
      exit(EXIT_SUCCESS);
}
