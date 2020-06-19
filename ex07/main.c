#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

// Escreva um programa que leia dez números do usuário e escreva o quadrado de cada número.

main() {

    setlocale(LC_ALL, "");

    int numero;

    for (int i = 0; i < 10; i++) {
        printf("Digite um número: ");
        scanf("%d", &numero);

        printf("\nQuadrado = %.lf\n\n", pow(numero, 2));
    }

    system("pause");
}
