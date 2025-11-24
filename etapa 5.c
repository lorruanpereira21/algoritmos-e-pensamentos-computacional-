/*****************************************************************************/
#include <stdio.h>
#include <math.h>

/* Bem-vindos ao sistema de notas da UDF!\n.*/


float calcularMedia(float notas[], int n) {
    float soma = 0;
    for (int i = 0; i < n; i++) {
        soma += notas[i];
    }
    return soma / n;
}

float maiorNota(float notas[], int n) {
    float maior = notas[0];
    for (int i = 1; i < n; i++) {
        if (notas[i] > maior) {
            maior = notas[i];
        }
    }
    return maior;
}

float menorNota(float notas[], int n) {
    float menor = notas[0];
    for (int i = 1; i < n; i++) {
        if (notas[i] < menor) {
            menor = notas[i];
        }
    }
    return menor;
}

float desvioPadrao(float notas[], int n) {
    float media = calcularMedia(notas, n);
    float soma = 0;

    for (int i = 0; i < n; i++) {
        soma += pow(notas[i] - media, 2);
    }

    return sqrt(soma / n);
}

// ---------------- PROGRAMA PRINCIPAL ----------------

int main() {
    
    printf("Bem-vindos ao sistema de notas da UDF!\n\n");

    int n;

    // Etapa 1: Entrada das notas
    printf("Quantas notas deseja inserir? ");
    scanf("%d", &n);

    float notas[n];
    int indice = 0;

    // Etapa 2 e 3: validação e repetição
    while (indice < n) {
        float nota;
        printf("Digite a nota %d: ", indice + 1);
        scanf("%f", &nota);

        if (nota < 0 || nota > 10) {
            printf("ERRO: A nota deve estar entre 0 e 10.\n");
        } else {
            notas[indice] = nota;
            indice++;
        }
    }

    int opcao;

    // Etapa 5: Menu com funções
    do {
        printf("\n============== MENU ==============\n");
        printf("1 - Calcular média\n");
        printf("2 - Mostrar maior nota\n");
        printf("3 - Mostrar menor nota\n");
        printf("4 - Calcular desvio padrão\n");
        printf("5 - Exibir todas as notas\n");
        printf("6 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Média das notas: %.2f\n", calcularMedia(notas, n));
                break;

            case 2:
                printf("Maior nota: %.2f\n", maiorNota(notas, n));
                break;

            case 3:
                printf("Menor nota: %.2f\n", menorNota(notas, n));
                break;

            case 4:
                printf("Desvio padrão: %.2f\n", desvioPadrao(notas, n));
                break;

            case 5:
                printf("Notas cadastradas:\n");
                for (int i = 0; i < n; i++) {
                    printf("Nota %d: %.2f\n", i + 1, notas[i]);
                }
                break;

            case 6:
                printf("Encerrando o sistema...\n");
                break;

            default:
                printf("Opção inválida!\n");
        }

    } while (opcao != 6);

return.0;
}