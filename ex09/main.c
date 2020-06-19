#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Criar um programa que escreva todos os números de 1 até 20, e a soma de todos eles.

main() {

    setlocale(LC_ALL, "");

    int soma = 0;

    for (int i = 1; i <= 20; i++) {
        printf("%d\n", i);

        soma += i;
    }

    printf("\nSoma = %d\n", soma);

    system("pause");
}
