#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

// Criar um programa que mostre todos os n�meros de 1 at� 20, e a soma do quadrado desses n�meros.

main() {

    setlocale(LC_ALL, "");

    double soma = 0;

    for (int i = 1; i <= 20; i++) {
        printf("%d ^ 2 = %.lf\n", i, pow(i, 2));

        soma += pow(i, 2);
    }

    printf("\nSoma = %.lf\n", soma);

    system("pause");
}
