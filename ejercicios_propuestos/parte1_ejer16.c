#include <stdio.h>

float Comision(int ventas);

int main (void)
{
    int ventas;
    float comision;
    printf("\n Ingrese valor de venta: ");
    scanf("%d",&ventas);
    comision = Comision(ventas);
    printf("\n El valor de comisión es de: %.3f", comision);
}

float Comision(int ventas){

    float comision;

    if (ventas < 20001 ){
        
        comision = ventas * 0.05;
        
    }else if (ventas < 50001){
    
        comision = (ventas * 0.07) + 1000;
        
    }else if (ventas > 50000){
    
        comision = (ventas * 0.1) + 3100;
    }    
    if(comision < 0){
    
        return 0;      
    }
    return comision;

}