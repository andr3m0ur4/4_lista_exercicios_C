#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    Sendo H = 1 + 1/2 + 1/3 + 1/4 + (1/...) + 1/N, faça um programa para gerar o número H.
    O número N é digitado pelo usuário.
*/

main() {

    setlocale(LC_ALL, "");

    int numero;
    double h = 1.0;

    printf("Digite um número: ");
    scanf("%d", &numero);

    for (int i = 2; i <= numero; i++) {
        h += (1.0 / i);
    }

    printf("H = %.1lf\n", h);

    system("pause");
}
