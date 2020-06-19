#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

// Escreva um programa que leia dez números do usuário e escreva o cubo de cada número.

main() {

    setlocale(LC_ALL, "");

    int numero;

    for (int i = 0; i < 10; i++) {
        printf("Digite um número: ");
        scanf("%d", &numero);

        printf("\nCubo = %.lf\n\n", pow(numero, 3));
    }

    system("pause");
}
