#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>


int NumeroAleatorio();
int Mensajes();
void correcto(int);
void incorrecto(int);
int duber = 0; 
int jose = 0;
int dxorj = 0;
float r = 0.0;

int main()
{
    int n1, n2, producto, d;
    bool bandera;
    srand(time(NULL)); 

    printf("Digite -1 para terminar la ejecucion\n");
    do
    {
        n1 = NumeroAleatorio();
        n2 = NumeroAleatorio();
        producto = n1 * n2;
        printf("¿Cuanto es %d veces %d?\n", n1, n2);
        scanf("%d", &d);
        bandera = 1;

        if (d < 0)
        {
            printf("Fin del programa.");
            porcentaje();
            exit(-1);
        }
        else if (d == producto)
        {
            correcto(Mensajes());
        }
        else
        {

            while (bandera)
            {
                incorrecto(Mensajes());
                scanf("%d", &d);
                if (d == producto)
                {
                    correcto(Mensajes());
                    bandera = 0;
                }

                if (d <= 0)
                {
                    printf("Fin del programa.");
                    porcentaje();
                    exit(-1);
                }
            }
        }

    } while (d >= 0);

    return 0;
}

int NumeroAleatorio()
{
    int m;
    m = rand() % 10;
    return m;
}

int Mensajes()
{
    int m;
    m = rand() % 4;
    return m;
}

void correcto(int n)
{
    jose+=1;
    dxorj+=1;
    switch (n)
    {
    case 0:
        printf("Muy bien!\n");
        break;
    case 1:
        printf("Excelente!\n");
        break;
    case 2:
        printf("Buen trabajo!\n");
        break;
    case 3:
        printf("Sigue haciéndolo bien!\n");
        break;
    }
}

void incorrecto(int n)
{
    duber+=1;
    dxorj+=1;
    switch (n)
    {
    case 0:
        printf("No. Por favor trata de nuevo.\n");
        break;
    case 1:
        printf("Incorrecto. Trata una vez más.\n");
        break;
    case 2:
        printf("No te rindas!\n");
        break;
    case 3:
        printf("No. Trata de nuevo\n");
        break;
    
    }
}

void porcentaje(){
    if(dxorj==0){
        exit(-1);
    }
    printf("%d\n",jose);
    printf("%d\n",dxorj);
    r = (float)jose/(float)dxorj;
    printf("Porcentaje de respuestas correctas %2.0f \n",r*100);
    if(r<0.75){
        printf("Por favor pídele ayuda al instructor\n");
    }
}

