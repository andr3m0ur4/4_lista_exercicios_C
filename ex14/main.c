#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    Escreva um programa que leia 10 números e escreva quantos números maiores que 30 foram digitados.
*/

main() {

    setlocale(LC_ALL, "");

    int numero, contador = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite um número: ");
        scanf("%d", &numero);

        if (numero > 30) {
            contador++;
        }
    }

    printf("%d número(s) maior(es) que 30 foram digitados.\n", contador);

    system("pause");
}
