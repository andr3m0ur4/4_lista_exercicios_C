#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    Escreva um programa que leia 10 n�meros e escreva quantos n�meros maiores que 30 foram digitados.
*/

main() {

    setlocale(LC_ALL, "");

    int numero, contador = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite um n�mero: ");
        scanf("%d", &numero);

        if (numero > 30) {
            contador++;
        }
    }

    printf("%d n�mero(s) maior(es) que 30 foram digitados.\n", contador);

    system("pause");
}
