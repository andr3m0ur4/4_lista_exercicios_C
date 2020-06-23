#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    A série de RICCI difere da série de FIBONACCI porque os dois primeiros termos são fornecidos pelo usuário.
    Os demais termos são gerados da mesma forma que a série de FIBONACCI.
    Criar um programa que escreva os N primeiros termos da série de RICCI e a soma dos termos impressos.
*/

main() {

    setlocale(LC_ALL, "");

    int n1, n2, n, n3;

    printf("Digite o primeiro termo: ");
    scanf("%d", &n1);

    printf("Digite o segundo termo: ");
    scanf("%d", &n2);

    printf("Digite  a quantidade de termos: ");
    scanf("%d", &n);

    printf("%d\n", n1);
    printf("%d\n", n2);

    for (int i = 2; i < n; i++) {
        n3 = n1 + n2;
        printf("%d\n", n3);
        n1 = n2;
        n2 = n3;
    }

    system("pause");
}
