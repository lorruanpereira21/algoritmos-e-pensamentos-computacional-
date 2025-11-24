/******************************************************************************/

#include <stdio.h>

int main() {
    float nota;

    printf("Etapa 2 - Validacao de nota\n");
    printf("Digite uma nota (0 a 10): ");
    scanf("%f", &nota);

    if (nota < 0.0f || nota > 10.0f) {
        printf("Erro: nota invalida. Deve ser entre 0 e 10.\n");
    } else {
        printf("Nota valida: %.2f\n", nota);
    }

    return 0;
}