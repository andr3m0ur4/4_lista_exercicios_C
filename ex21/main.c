#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    A s�rie de RICCI difere da s�rie de FIBONACCI porque os dois primeiros termos s�o fornecidos pelo usu�rio.
    Os demais termos s�o gerados da mesma forma que a s�rie de FIBONACCI.
    Criar um programa que escreva os N primeiros termos da s�rie de RICCI e a soma dos termos impressos.
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
