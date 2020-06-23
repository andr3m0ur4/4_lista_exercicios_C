#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    Dada uma sequência de 30 números inteiros (aleatoriamente de 1 a 5),
    contar o número que mais se repete na sequência e a quantidade de vezes.
    Exemplo: A sequência: 4 2 4 3 3 2 2 2 4 1 1 5 5. Número que mais se repete sequencialmente: 2;
    Quantidade de vezes: 3.
*/

main() {

    setlocale(LC_ALL, "");

    int numero, cont_1 = 0, cont_2 = 0, cont_3 = 0, cont_4 = 0, cont_5 = 0, maior = 0, valor;

    srand(time(NULL));

    for (int i = 0; i < 30; i++) {
        numero = (rand() % 5) + 1;
        printf("%d\n", numero);

        if (numero == 1) {
            cont_1++;
            if (cont_1 > maior) {
                maior = cont_1;
                valor = 1;
            }
        } else if (numero == 2) {
            cont_2++;
            if (cont_2 > maior) {
                maior = cont_2;
                valor = 2;
            }
        } else if (numero == 3) {
            cont_3++;
            if (cont_3 > maior) {
                maior = cont_3;
                valor = 3;
            }
        } else if (numero == 4) {
            cont_4++;
            if (cont_4 > maior) {
                maior = cont_4;
                valor = 4;
            }
        } else {
            cont_5++;
            if (cont_5 > maior) {
                maior = cont_5;
                valor = 5;
            }
        }
    }

    printf("Número que mais se repete sequencialmente: %d\n", valor);
    printf("Quantidade de vezes: %d\n", maior);

    system("pause");
}
