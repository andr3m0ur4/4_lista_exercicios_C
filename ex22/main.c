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

    int numero, num_anterior = 0, num_repeticao, qtd_repeticao = 0, maior_repeticao = 0;

    srand(time(NULL));

    for (int i = 0; i < 30; i++) {
        numero = (rand() % 5) + 1;
        printf("%d - ", numero);

        if (numero == num_anterior) {
            qtd_repeticao++;
        } else {
            qtd_repeticao = 1;
        }

        if (qtd_repeticao > maior_repeticao) {
            maior_repeticao = qtd_repeticao;
            num_repeticao = numero;
        }

        num_anterior = numero;
    }

    printf("\nNúmero que mais se repete sequencialmente: %d\n", num_repeticao);
    printf("Quantidade de vezes: %d\n", maior_repeticao);

    system("pause");
}
