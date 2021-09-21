#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   
    int n;
 
    printf("\nIntroduzca un numero de cinco digitos y sera impreso con espacios entre ellas.\n ");
    scanf("%d", &n);
    
  
      printf("%d ",   n/10000);
      printf("%d ", (n%10000)/1000);
      printf("%d ", ((n%10000)%1000)/100);
      printf("%d ", (((n%10000)%1000)%100)/10);
      printf("%d\n ", ((((n%10000)%1000)%100)%10));

      exit(EXIT_SUCCESS);
}

