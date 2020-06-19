#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Escreva um programa que mostre todos os números ímpares do intervalo de 100 a 200.

main() {

    setlocale(LC_ALL, "");

    for (int i = 100; i <= 200; i++) {
        if (i % 2 != 0) {
            printf("%d\n", i);
        }
    }

    system("pause");
}
