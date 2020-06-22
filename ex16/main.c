#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    Escreva um programa que leia 20 números e calcule a média aritmética dos valores lidos,
    a quantidade de valores positivos, a quantidade de valores negativos e o percentual de valores negativos
    e positivos. Mostre os resultados.
*/

main() {

    setlocale(LC_ALL, "");

    int numero, soma = 0, positivo = 0, negativo = 0;
    double media;

    for (int i = 0; i < 20; i++) {
        printf("Digite um número: ");
        scanf("%d", &numero);

        soma += numero;

        if (numero > 0) {
            positivo++;
        }

        if (numero < 0) {
            negativo++;
        }
    }

    media = soma / 20.0;
    double per_positivo = (positivo * 100) / 20.0;
    double per_negativo = (negativo * 100) / 20.0;

    printf("Média aritmética = %.2lf\n", media);
    printf("Qtde de valores positivos = %d\n", positivo);
    printf("Qtde de valores negativos = %d\n", negativo);
    printf("Percentual de valores positivos = %.2lf\n", per_positivo);
    printf("Percentual de valores negativos = %.2lf\n", per_negativo);

    system("pause");
}
