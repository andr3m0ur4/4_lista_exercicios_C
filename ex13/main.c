#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    Criar um programa que leia um n�mero (N) e ent�o escreva os m�ltiplos de 3 e 5,
    ao mesmo tempo, no intervalo de 1 a N.
*/

main() {

    setlocale(LC_ALL, "");

    int numero;

    printf("Digite um n�mero: ");
    scanf("%d", &numero);

    for (int i = 1; i <= numero; i++) {

        if (i % 3 == 0) {
            printf("%d � m�ltiplo de 3\n", i);
        }

        if (i % 5 == 0) {
            printf("%d � m�ltiplo de 5\n", i);
        }
    }

    system("pause");
}
