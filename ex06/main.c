#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Escreva um programa que escreva todos os números múltiplos de 5, no intervalo de 1 a 500

main() {

    setlocale(LC_ALL, "");

    for (int i = 1; i <= 500; i++) {
        if (i % 5 == 0) {
            printf("%d\n", i);
        }
    }

    system("pause");
}
