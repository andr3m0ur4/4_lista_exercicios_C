#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    Escreva um programa que leia 15 pares de valores a, b, todos inteiros e positivos,
    um par de cada vez, e com a < b, escreve os inteiros de a até b.
*/

main() {

    setlocale(LC_ALL, "");

    int a, b;

    for (int i = 0; i < 15; i++) {
        printf("Digite o valor de a: ");
        scanf("%d", &a);

        printf("Digite o valor de b: ");
        scanf("%d", &b);

        for (a; a <= b; a++) {
            printf("%d - ", a);
        }

        printf("\n------------------------------------\n");
    }

    system("pause");
}
