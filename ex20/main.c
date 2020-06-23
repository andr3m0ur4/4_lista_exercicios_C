#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    Em uma lanchonete de uma pacata cidade, foi realizada uma pesquisa entre os consumidores do estabelecimento.
    As pessoas tinham que responder a duas perguntas: sexo (1 –Masculino e 2 –Feminino)
    e sua opinião em relação ao cardápio da lanchonete (1 –Ótimo, 2 –Bom, 3 –Regular, 4 –Ruim).
    A pesquisa foi realizada com 40 pessoas. O programa deverá apresentar os seguintes dados:
    • % de ótimo e bom (agrupadas);
    • % de regular e ruim (agrupadas);
    • % do sexo masculino e feminino;
    • quantidade de pessoas do sexo masculino que responderam “Ótimo”.
*/

main() {

    setlocale(LC_ALL, "");

    int sexo, opiniao, soma_positivos = 0, soma_negativos = 0, masculino = 0, feminino = 0, cont_otimo = 0;

    for (int i = 0; i < 40; i++) {
        printf("Digite o sexo (1 – Masculino e 2 – Feminino): ");
        scanf("%d", &sexo);

        printf("Qual a sua opinião em relação ao cardápio da lanchonete\n");
        printf("(1 – Ótimo, 2 – Bom, 3 – Regular, 4 – Ruim): ");
        scanf("%d", &opiniao);

        if (opiniao == 1 || opiniao == 2) {
            soma_positivos++;
        }

        if (opiniao == 3 || opiniao == 4) {
            soma_negativos++;
        }

        if (sexo == 1) {
            masculino++;

            if (opiniao == 1) {
                cont_otimo++;
            }
        }

        if (sexo == 2) {
            feminino++;
        }

        printf("\n----------------------------------------------------------------\n");
    }

    double per_positivos = (soma_positivos * 100) / 40.0;
    double per_negativos = (soma_negativos * 100) / 40.0;
    double per_masculino = (masculino * 100) / 40.0;
    double per_feminino = (feminino * 100) / 40.0;

    printf("Porcentagem de ótimo e bom = %.1lf%%\n", per_positivos);
    printf("Porcentagem de regular e ruim = %.1lf%%\n", per_negativos);
    printf("Porcentagem do sexo masculino = %.1lf%%\n", per_masculino);
    printf("Porcentagem do sexo feminino = %.1lf%%\n", per_feminino);
    printf("Quantidade de pessoas do sexo masculino que responderam “Ótimo” = %d\n", cont_otimo);

    system("pause");
}
