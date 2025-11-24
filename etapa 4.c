/******************************************************************************/
#include <stdio.h>

int main() {
    int n, i;
    printf("Etapa 4 - Vetor de notas e calculos simples\n");
    printf("Quantas notas deseja inserir? ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Numero invalido de notas.\n");
        return 0;
    }

    float notas[n]; // VLA: simples para iniciantes (C99)
    for (i = 0; i < n; i++) {
        printf("Nota %d: ", i + 1);
        scanf("%f", &notas[i]);

        if (notas[i] < 0.0f || notas[i] > 10.0f) {
            printf("Nota invalida, definindo 0.0 por seguranca.\n");
            notas[i] = 0.0f;
        }
    }

    // calculos: media, maior e menor
    float soma = 0.0f;
    float maior = notas[0];
    float menor = notas[0];
    for (i = 0; i < n; i++) {
        soma += notas[i];
        if (notas[i] > maior) maior = notas[i];
        if (notas[i] < menor) menor = notas[i];
    }
    float media = soma / n;

    printf("\nResultados:\n");
    printf("Media: %.2f\n", media);
    printf("Maior nota: %.2f\n", maior);
    printf("Menor nota: %.2f\n", menor);

    return 0;
}
