#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// 1. Escreva um programaque mostre todos os números inteiros de 0 a 50.

main() {

    setlocale(LC_ALL, "");

    for (int i = 0; i <= 50; i++) {
        printf("%d\n", i);
    }

    system("pause");
}
