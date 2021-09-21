# Ejercicios propuestos

## Enunciados

### Parte 1

1. Escriba un programa que solicite su nombre y realice lo que se solicita a continuación:
   * Imprima su nombre encerrado entre comillas dobles.
   * Imprima su nombre en un campo de 20 caracteres de ancho con el nombre desplegado a la derecha.
   * Imprima su nombre en un campo de 20 caracteres de ancho con el nombre desplegado a la izquierda.
   * Imprima un campo de un tamaño de 3 caracteres mas amplio que el nombre.


#include <stdio.h>

int main() {
    char nom[] = "Jose";
    
    // 1
    printf("\"%s\"\n",nom);
    // 2
    printf("%+20s\n",nom);
    // 3
    printf("%-20s\n",nom);
    // 4
    printf("%8s\n",nom);

    return 0;

}


2. Escriba un programa que lea un valor de punto flotante e imprima en formato de notación cientifica del valor leido. Por ejemplo:

   ```
   El valor de 21.3 en notacion cientifica es 2.1e+001.
   ```

3. Escriba un programa que solicite su altura en centimetros y su nombre y despliegue la información de la siguiente manera:

   ```
   Chespirito, usted tiene una altura de 1.73 metros.
   ```

4. Escriba un programa que solicite la velocidad de descarga en megabits por segundo (Mbps) y el tamaño de un archivo en Megabytes (MB). El programa deberá calcular el tiempo de descarga del archivo. Dentro de este contexto, 1 byte = 8 bits. Use el tipo ```float```, y use ```/``` para la división. El programa deberá mostrar todos los tres valores (velocidad de descarga, tamaño del archivo, y tiempo de descarga) mostrando dos digitos a la derecha del punto decimal, tal y como se muestra a continuación:

   ```
   A 18.12 megabits por segundo, un archivo de 2.20 megabytes se descarga en 0.97 segundos.
   ```

5. Escriba un programa que lea un entero, determine e imprima si es impar o par.

6. Escriba un programa que lea dos enteros, determine e imprima si el primero es múltiplo del segundo.

7. Escriba un programa que reciba como entrada un entero de cinco dígitos, que separe ese número en sus dígitos individuales y los imprima, cada uno separado de los demás por tres espacios. (**Sugerencia**: use los operadores de división entera y módulo). Por ejemplo, si el usuario escribe el número ```42339```, el
programa debe imprimir:

   ```
   4 2 3 3 9
   ```   

8. Desarrolle una aplicación que determine si alguno de los clientes de una tienda de departamentos se ha excedido del límite de crédito en una cuenta. Para cada cliente se tienen los siguientes datos:
    *  Número de cuenta (un entero)
    *  Saldo al inicio del mes
    *  Total de todos los artículos cargados por el cliente en el mes
    *  Total de todos los créditos aplicados a la cuenta del cliente en el mes
    *  Límite de crédito permitido.

    El programa debe usar una instrucción while para recibir como entrada cada uno de estos datos, debe calcular el nuevo saldo (= saldo inicial + cargos – créditos) y determinar si éste excede el límite de crédito del cliente. Para los clientes cuyo límite de crédito se ha excedido, el programa debe mostrar el número de cuenta del cliente, su límite de crédito, el nuevo saldo y el mensaje "Se excedio el limite de su credito".

    ```
    Introduzca el numero de cuenta (o -1 para salir): 100
    Introduzca el saldo inicial: 5394.78
    Introduzca los cargos totales: 1000.00
    Introduzca los creditos totales: 500.00
    Introduzca el limite de credito: 5500.00
    El nuevo saldo es 5894.78
    Cuenta: 100
    Limite de credito: 5500.00
    Saldo: 5894.78
    Se excedio el limite de su credito.

    Introduzca el numero de cuenta (o -1 para salir): 200
    Introduzca el saldo inicial: 1000.00
    Introduzca los cargos totales: 123.45
    Introduzca los creditos totales: 321.00
    Introduzca el limite de credito: 1500.00
    El nuevo saldo es 802.45

    Introduzca el numero de cuenta (o -1 para salir): -1
    ```

9. Escriba un programa que utilice una instrucción que solicite un valor de N para imprimir una salida como la que se muestra a continuación:

    ```
    N       10*N        100*N       1000*N
    1       10          100         1000
    2       20          200         2000
    3       30          300         3000
    4       40          400         4000
    5       50          500         5000
    ```

10. Escriba un programa que utilice una instrucción for para encontrar el menor de varios enteros. Suponga que el primer valor leído especifica el número de valores restantes.

11. Escriba un programa que utilice una instrucción for para calcular e imprimir el producto de los enteros impares del 1 al 15.

12. La función factorial se utiliza frecuentemente en los problemas de probabilidad. Escriba un programa que utilice una función for para evaluar los factoriales de los enteros del 1 al 5. Muestre los resultados en formato tabular. ¿Qué dificultad podría impedir que usted calculara el factorial de 20?

13. Una aplicación interesante de las computadoras es dibujar gráficos convencionales y de barra. Escriba un programa que lea cinco números (cada uno entre 1 y 30). Suponga que el usuario sólo introduce valores válidos. Por cada número leído, su programa debe imprimir una línea que contenga ese número de
asteriscos adyacentes. Por ejemplo, si su programa lee el número 7, debe mostrar *******.

14. Para jugar al PUM los N jugadores se sientan en círculo y van diciendo números consecutivos a partir del 1 (1, 2, 3, ...). Para el juego se escoge un número X menor que 10 (por ejemplo 7) y a la persona a la que le corresponda decir un múltiplo de ese número (en el caso del 7: 7, 14, 21, 28, ...), debe decir, en vez del número, la palabra PUM. Escriba una función que escriba, a partir del número de jugadores N y del número escogido para el PUM, X, el desarrollo del juego para los primeros 500 números, indicando el número del jugador y lo que dijo. Por ejemplo, si son 3 jugadores y X es el 4 el juego comenzaría así:

    ```
    jugador             jugada
    1                   1
    2                   2
    3                   3
    1                   pum
    2                   5
    3                   6
    1                   7
    2                   pum ...
    ```

15. En matemáticas, la sucesión o serie de Fibonacci es la siguiente sucesión infinita de números naturales: 

    ```
    0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597 ...
    ```
    La sucesión comienza con los números 0 y 1, y a partir de estos, cada término es la suma de los dos anteriores

    Cree una función que reciba un número que indica la cantidad de términos de la sucesión que se quieren ver, y los imprima en pantalla.

16. El propietario de Harry’s Car Sales paga a cada vendedor una comisión basada en sus ventas trimestrales. Los rangos de ventas y las correspondientes tasas son mostrades en la tabla que aparece a continuación:

| Ventas trimestrales ($) | Comisión |
|---|---|
| 0 - 20000 |  Multiplicar las ventas por 5% |
|  20001-50000 | Multiplicar la ventas sobre 20000 por 7% y entonces agregue 1000 al resultado |
|  50001 o mas | Multiplicar la ventas sobre 50000 por 10% y entonces agregue 3100 al resultado  | 

Teniendo en cuenta lo anterior lleve a cabo las siguientes tareas:
* Comprenda el problema y realice casos de obteniendo las comisiones para los siguientes valores de ventas: 20000, 20001, 30000, 50000, 50001, 75000, y –3.
* Codifique el algoritmo en C de modo que permita el calculo de las comisiones. Lleve a cabo las pruebas con los casos de test elegidos en el item anterior.

17. Escriba un programa en C para desplegar la tabla de multiplicación desde 1 hasta N.

Test de entrada:

```
Numero final (empezando de 1): 8
```
Salida esperada:

```
Tabla de multiplicación desde 1 hasta 8:

1x1 = 1, 2x1 = 2, 3x1 = 3, 4x1 = 4, 5x1 = 5, 6x1 = 6, 7x1 = 7, 8x1 = 8
...
1x10 = 10, 2x10 = 20, 3x10 = 30, 4x10 = 40, 5x10 = 50, 6x10 = 60, 7x10 = 70, 8x10 = 80
```

18. Escriba un programa en C para imprimir la siguiente secuencia (dado el numero de renglones):

```
1
01
101
0101
10101
```

18. Escriba una función llamada múltiplo que tome dos enteros y determine si el segundo es múltiplo del primero. La función deberá tomar dos argumentos enteros y devolver 1 si el segundo es un múltiplo del primero y 0 si no. Luego, utilice esta función en un programa que acepte como entrada una serie de pares de enteros.

19. Escribir un programa que lea dos números **x** y **n** y en una función, calcule la suma de la progresión geométrica: 

```
1 + x + x^2 + x^3 + x^4 + ⋯ + x^n
```

20. Escriba un programa en C para encontrar la suma de las series: 

```
1 - x^2/2! + x^4/4! - ...
```

Test data:
```
Valor de entrada de x: 2
Numero de terminos: 5
```

Salida esperada:

```
suma: -0.415873
```

### Parte 2

Observe los siguientes ejemplos y sus soluciones:

**Ejemplo 1**: Hacer una función que solicite 2 números, luego, genere 10 números aleatorios entre estos 2 números y cuente la cantidad de números pares.

**Solución**:

```C

#include <stdio.h>
#include <stdlib.h> //rand() y srand()
#include <time.h>   //time()


int mayor(int num1, int num2);
int menor(int num1, int num2);
int generar_aleatorios(int num1, int num2, int num_aleatorios);

int main (void) {
    srand(time(NULL)); //genera la semilla
    int num_pares, min, max;
    printf("Digite los dos limites (minimo maximo): ");
    scanf("%d %d", &min, &max);
    
    num_pares = generar_aleatorios(min, max, 10);
    putchar('\n');
    printf("La cantidad de numeros pares generados es de: %d\n", num_pares);
    return 0;
}

int mayor(int num1, int num2) {
    if(num1 >= num2) {
        return num1;
    }
    else {
        return num2;
    }
}

int menor(int num1, int num2) {
    if(num1 <= num2) {
        return num1;
    }
    else {
        return num2;
    }
}

int generar_aleatorios(int num1, int num2, int num_aleatorios) {
    int cnt = 0, num, M, m;    
    M = mayor(num1, num2);
    m = menor(num1, num2);
    for(int i = 0; i < num_aleatorios; i++) {
        num = rand()%(M - m + 1) + m;
        if(num % 2 == 0) {
            cnt++;
        }
        printf("%d ", num);
    }    
    return cnt;
}
```

**Ejemplo 2**: Escriba un programa que simule el lanzamiento de una moneda. En cada línea de entrada aparece el número de lanzamientos de la moneda. En la línea de salida correspondiente debe aparecer una secuencia con el resultado de cada lanzamiento ('C' cuando fue cara y 'S' cuando fue sello) junto con el número de veces que aparece cada lado. El programa deberá usar una función que se encargue de simular el lanzamiento de la moneda una sola vez, se recomienda que use la función anteriormente creada. Las salidas pueden ser 0 para la cara ('C') ó 1 para el sello ('S').

La siguiente tabla muestra los ejemplos de algunos casos de entrada y salida:

|Número de lanzamientos | Salida |
|---|--|
|5 |CCSSS, #de caras = 2, # de sellos = 3|
|8 |SCCSCSCC, #de caras = 5, # de sellos = 3|
|5 |SCSCC, # de caras = 3, # de sellos = 2|

**Solución**:

```C
#include <stdio.h>
#include <stdlib.h> //rand() y srand()
#include <time.h>   //time()


int mayor(int num1, int num2);
int menor(int num1, int num2);
int generar_aleatorios(int num1, int num2);
void imprimir_moneda(int lado);

int main (void) {
    srand(time(NULL)); //genera la semilla
    int lanzamientos, lado;
    int num_caras = 0, num_sellos = 0;
    printf("Digite el numero de lanzamientos: ");
    scanf("%d", &lanzamientos);
    for (int i = 0; i < lanzamientos; i++) {
        lado = generar_aleatorios(0,1);
        if (lado == 1) {
            num_sellos++;            
        }
        else {
            num_caras++;
        }
        imprimir_moneda(lado);
    }
    printf(", #de caras = %d, # de sellos = %d\n",num_caras,num_sellos);
    return 0;
}

int mayor(int num1, int num2) {
    if(num1 >= num2) {
        return num1;
    }
    else {
        return num2;
    }
}

int menor(int num1, int num2) {
    if(num1 <= num2) {
        return num1;
    }
    else {
        return num2;
    }
}

int generar_aleatorios(int num1, int num2) {
    int num, M, m;
    
    M = mayor(num1, num2);
    m = menor(num1, num2);    
    num = rand()%(M - m + 1) + m;
    return num;
}

void imprimir_moneda(int lado) {
    if(lado == 1) {
        printf("S");
    }
    else {
        printf("C");
    }
}
```

Analizando los códigos de los ejemplos anteriormente mostrados y reciclando aquello que le pueda ser util en haras del reuso, resolver los siguientes problemas:

1. Las computadoras están jugando un papel creciente en la educación. Escriba un programa que ayudaría a un alumno de escuela primaria a aprender a multiplicar (tablas entre 1 y 10). Utilice rand() para producir dos enteros positivos de un dígito. A continuación debería imprimir una pregunta coma la siguiente:

```
¿Cuánto es 6 veces 7?
```

A continuación el alumno escribe la respuesta. Su programa verifica la respuesta del alumno. Si es correcta imprime **"Muy bien!"** y a continuación solicita otra multiplicación. Si la respuesta es incorrecta imprimirá **"No. Por favor intenta nuevamente"** y a continuación permitirá que el alumno vuelva a intentar con la misma pregunta de forma repetida hasta que al final la conteste correctamente. El programa debe indicarle al alumno una forma de terminar la ejecución.

2. La utilización de las computadoras en la educación se conoce como Instrucción Asistida por Computadora (CAI). Un problema que se desarrolla en los entornos CIA es la fatiga del alumno. Este problema puede ser enfrentado variando el diálogo de la computadora para retener la atención del alumno. Modifique el programa del ejercicio anterior de modo que este escoja de forma aleatoria uno de cuatro posibles mensajes tanto para respuestas correctas como para respuestas incorrectas. Los cuatro posibles mensajes en cada caso son:

**Respuestas correctas**:

```
Muy bien!
Excelente!
Buen trabajo!
Sigue haciéndolo bien!
```

**Respuestas incorrectas**:

```
No. Por favor trata de nuevo.
Incorrecto. Trata una vez más.
No te rindas!
No. Trata de nuevo
```

**Nota**: Mediante el generador de números aleatorios, seleccione un número entre 1 y 4 para desplegar un mensaje diferente para cada respuesta. Presente la respuesta mediante una estructura switch.

3. Los sistemas más avanzados de CAI vigilan el rendimiento del alumno a lo largo de un periodo de tiempo. La decisión para empezar un tema nuevo se basa a menudo en el éxito del alumno en relación con temas anteriores. Modifique el programa del ejercicio anterior para contar el número de respuestas correctas e incorrectas del estudiante. Una vez el estudiante decida terminar la ejecución del programa, el programa debe calcular y mostrar el porcentaje de respuestas correctas respecto al total de preguntas que le hizo el programa. Si el porcentaje es menor a 75%, el programa deberá imprimir el mensaje **"Por favor pídele ayuda al instructor" y termina**.
   
