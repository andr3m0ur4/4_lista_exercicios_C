#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

// Escreva um programa que leia dez n�meros do usu�rio e escreva o cubo de cada n�mero.

main() {

    setlocale(LC_ALL, "");

    int numero;

    for (int i = 0; i < 10; i++) {
        printf("Digite um n�mero: ");
        scanf("%d", &numero);

        printf("\nCubo = %.lf\n\n", pow(numero, 3));
    }

    system("pause");
}
