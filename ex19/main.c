#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    Foi feita uma pesquisa entre 40 habitantes de uma região.
    Foram coletados os dados de idade, sexo (M/F) e salário.
    Faça um programa que informe:
    a) a média de salário do grupo;
    b) a média da idade do grupo;
    c) percentual de habitantes do sexo masculino;
    d)percentual de habitantes do sexo feminino;
    e) quantidade de mulheres com salário inferior a R$ 500,00;
*/

main() {

    setlocale(LC_ALL, "");

    int idade, soma_salario = 0, soma_idade = 0, homem = 0, mulher = 0, salario_baixo = 0;
    char sexo;
    double salario;

    for (int i = 0; i < 40; i++) {
        printf("Digite a idade: ");
        scanf("%d", &idade);

        printf("Digite o sexo (M/F): ");
        scanf(" %c", &sexo);

        printf("Digite o salário: R$ ");
        scanf("%lf", &salario);

        soma_salario += salario;
        soma_idade += idade;

        if (toupper(sexo) == 'M') {
            homem++;
        }

        if (toupper(sexo) == 'F') {
            mulher++;

            if (salario < 500) {
                salario_baixo++;
            }
        }

        printf("\n---------------------------------\n");
    }

    double media_salario = soma_salario / 40.0;
    double media_idade = soma_idade / 40.0;
    double per_masculino = (homem * 100) / 40.0;
    double per_feminino = (mulher * 100) / 40.0;

    printf("Média do salário = R$ %.2lf\n", media_salario);
    printf("Média da idade = R$ %.lf\n", media_idade);
    printf("Percentual de habitantes do sexo masculino = %.2lf%%\n", per_masculino);
    printf("Percentual de habitantes do sexo feminino = %.2lf%%\n", per_feminino);
    printf("Quantidade de mulheres com salário inferior a R$ 500,00 = %d\n", salario_baixo);

    system("pause");
}
