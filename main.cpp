//
// Created by nickotronz7 on 3/10/16.
//

#include <iostream>
#include <vector>
#include "Mochila.h"
#include "Fibo.h"

using namespace std;


int main()
{

    /**
     * Prueba para el problema de la mochila
     */
/////////////////////////////////////////////////////////////
 int numero_de_articulos = 3;
 int Peso[numero_de_articulos] = {2, 3, 4};
 int Valor[numero_de_articulos] = {65, 80, 30};
 int PMax = 5;
 Mochila(numero_de_articulos, Peso, Valor, PMax);
    printf(" \n");
/////////////////////////////////////////////////////////////


    int num = 8;
    int num2 = 9;
    int num3 = 10;
    int num4 = 11;
    printf("Fibonacci de %d es %d \n", num, Fibo(num));
    printf("Fibonacci de %d es %d \n", num2, Fibo(num2));
    printf("Fibonacci de %d es %d \n", num3, Fibo(num3));
    printf("Fibonacci de %d es %d \n", num4, Fibo(num4));
    return 0;
}