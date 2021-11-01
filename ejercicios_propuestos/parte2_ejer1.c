#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<stdbool.h>

int NumeroAleatorio();

int main()
 {
    int n1, n2,producto,d;
    bool bandera;
    srand(time(NULL));
    printf("Digite -1 para terminar la ejecucion\n");
     
   do
     {
        bandera = 1;

        n1 = NumeroAleatorio();
        n2 = NumeroAleatorio();
        producto = n1 * n2; 
        printf("¿Cuanto es %d veces %d?\n", n1, n2);
        scanf("%d", &d);

        if (d < 0)
        {
            exit(-1);
        }
        else if (d == producto)
        {
            printf("Muy bien!\n");
        }
        else
        {

            while (bandera)
            {
                printf("Digite correctamente el resultado\n");
                scanf("%d", &d);

                if (d == producto)
                {
                    printf("Muy bien!\n");
                    bandera = 0;
                }

                if (d <= 0)
                {
                    printf("Fin del programa...");
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