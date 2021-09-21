
#include <stdio.h>
#include <stdlib.h>


 int main (void)
 {
     
   int cuenta;
   float saldoini, cargos, creditos, limcredito, saldofin;
     
   printf("Introduzca el numero de cuenta (o -1 para salir): ");
   scanf("%d",&cuenta);
   
       while (cuenta != -1)
       {
           printf("Introduzca el saldo inicial: ");
           scanf("%f",&saldoini);
   
           printf("Introduzca el total de cargos: ");
           scanf("%f",&cargos);
    
           printf("Introduzca el total de creditos: ");
           scanf("%f",&creditos);
   
           printf("Introduzca el limite de credito: ");
           scanf("%f",&limcredito);
 
           saldofin = saldoini+cargos-creditos;
       
         if(saldofin - limcredito > 0){
          

           printf("\n El nuevo saldo es: %.2f", saldofin);
           printf("\n Cuenta: %d",cuenta);
           printf("\n Limite de credito: %.2f",limcredito);
           printf("\n Saldo: %.2f" , saldoini);
           printf("\n Limite de credito excedido. \n");
           printf("\n Introduzca el numero de cuenta (o -1 para salir): ");
           scanf("%d",&cuenta);
   
           }else{
            printf("\n El nuevo saldo es: %.2f \n", saldofin);
            printf("\nIntroduzca el numero de cuenta (o -1 para salir): ");
            scanf("%d",&cuenta);
         }
     
    }
}
       
  
 


 