#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Escreva um programa que mostre todos os números pares do intervalo de 1 a 100.

main() {

    setlocale(LC_ALL, "");

    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
    }

    system("pause");
}
