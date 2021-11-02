#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<stdbool.h>

int multiplos(int x, int y);
int NumeroAleatorio();

int main(){
    
  int x, n, d; 
  srand(time(NULL));
  x = NumeroAleatorio();
  printf("El numero elegido para el PUM es %d \n", x);
  printf("Ingrese el numero de jugadores: ");
  scanf("%d",&n);
  printf("Jugador     Jugada");
  printf ("\n ");
  
  

    for (int j = 1; j <= 500; j++)  
     for (int i = 1; i <= n; i++) {
        d = multiplos(x,j); 
      if(d == 2){      
      printf ("%d      %d \n ",i,j);
      j = j + 1;
      } else if(d == 1){
      printf ("%d      %s \n ",i,"PUM");
      j = j + 1;
      }
     
  }
}

int multiplos(int n1, int n2){

  int  mayor, menor, r = 0;
  mayor = n1;
  menor = n2;
    
     if ( n2 > n1 )
          {        
         mayor = n2;
         menor = n1;
          }        

     if (0 == mayor % menor){
      //El numero es multiplo del numero 
      r = 1;
     }
      else if (0 != mayor % menor){
      //Los numeros no son multiplos.
      r = 2;
      }
     return r;
}

int NumeroAleatorio()
{
    int x;
    x = rand() % 10;
    return x;
}
