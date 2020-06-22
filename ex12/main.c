#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Criar um programa que leia dez números inteiros e escreva o maior e o menor número da lista.

main() {

    setlocale(LC_ALL, "");

    int numero, maior, menor;

    for (int i = 0; i < 10; i++) {
        printf("Digite um número: ");
        scanf("%d", &numero);

        if ( i == 0) {
            maior = 0;
            menor = numero;
        }

        if (numero > maior) {
            maior = numero;
        }

        if (numero < menor) {
            menor = numero;
        }
    }

    printf("\nMaior número = %d\n", maior);
    printf("\nMenor número = %d\n", menor);

    system("pause");
}
