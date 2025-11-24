#include <stdio.h>

int main() {
    float nota;

    printf("Etapa 1 - Entrada e saida de uma nota\n");
    printf("Digite uma nota (ex: 7.5): ");
    scanf("%f", &nota);

    printf("Nota lida: %.2f\n", nota);
    return 0;
}