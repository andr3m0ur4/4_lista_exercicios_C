#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    Fa�a um programa que leia as tr�s notas de 50 alunos de uma turma.
    Para cada aluno, calcule a m�dia aritm�tica. O programa dever� ler as notas,
    e informar qual foi a m�dia final de cada aluno.
*/

main() {

    setlocale(LC_ALL, "");

    double nota1, nota2, nota3;
    double media;

    for (int i = 0; i < 50; i++) {
        printf("Digite 1 nota: ");
        scanf("%lf", &nota1);

        printf("Digite 2 nota: ");
        scanf("%lf", &nota2);

        printf("Digite 3 nota: ");
        scanf("%lf", &nota3);

        media = (nota1 + nota2 + nota3) / 3.0;

        printf("M�dia do %d aluno = %.2lf\n\n", i + 1, media);
    }

    system("pause");
}
