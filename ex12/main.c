#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Criar um programa que leia dez n�meros inteiros e escreva o maior e o menor n�mero da lista.

main() {

    setlocale(LC_ALL, "");

    int numero, maior, menor;

    for (int i = 0; i < 10; i++) {
        printf("Digite um n�mero: ");
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

    printf("\nMaior n�mero = %d\n", maior);
    printf("\nMenor n�mero = %d\n", menor);

    system("pause");
}
