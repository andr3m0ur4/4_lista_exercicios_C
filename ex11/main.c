#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Criar um programa que mostre todos os n�meros de 1 at� 20, e a soma da metade desses n�meros

main() {

    setlocale(LC_ALL, "");

    double soma = 0;

    for (int i = 1; i <= 20; i++) {
        printf("%d metade = %.1lf\n", i, i / 2.0);

        soma += (i / 2.0);
    }

    printf("\nSoma = %.1lf\n", soma);

    system("pause");
}
