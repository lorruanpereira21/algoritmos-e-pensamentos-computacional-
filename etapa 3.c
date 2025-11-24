/*******************************************************************************/
#include <stdio.h>

int main() {
    float nota;
    char opcao;

    printf("Etapa 3 - Cadastro em loop (digite 'n' para parar)\n");

    do {
        printf("Digite uma nota (0 a 10): ");
        scanf("%f", &nota);

        if (nota < 0.0f || nota > 10.0f) {
            printf("Nota invalida! Nao sera armazenada.\n");
        } else {
            printf("Nota registrada: %.2f\n", nota);
        }

        // limpar o buffer e pedir se quer continuar
        printf("Deseja cadastrar outra nota? (s/n): ");
        // ler o espaco em branco antes do char para pular \n anterior
        scanf(" %c", &opcao);

    } while (opcao == 's' || opcao == 'S');

    printf("Encerrando cadastro.\n");
    return 0;
}