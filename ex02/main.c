#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// 2. Escreva um programa que mostre todos os números inteiros de 200 a100 em ordem decrescente.

main() {

    setlocale(LC_ALL, "");

    for (int i = 200; i >= 100; i--) {
        printf("%d\n", i);
    }

    system("pause");
}
