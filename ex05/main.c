#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

// Escreva um programa que mostre o quadrado dos números inteiros no intervalo de 1 a 20.

main() {

    setlocale(LC_ALL, "");

    for (int i = 1; i <= 20; i++) {

        printf("%d ^ 2 = %.lf\n", i, pow(i, 2));

    }

    system("pause");
}
