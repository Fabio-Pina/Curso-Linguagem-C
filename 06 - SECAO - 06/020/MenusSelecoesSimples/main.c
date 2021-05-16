#include <stdio.h>
#include <stdlib.h>

void main() {

    int opcao;

    while (opcao < 1 || opcao > 3) {

    // Inteface de Menu
    printf("Escolha uma opcao: ");
    printf("\n 1-Opcao 1: ");
    printf("\n 2-Opcao 2: ");
    printf("\n 3-Opcao 3:\n\n ");

    // Lendo a opção
    scanf("%d", &opcao);

    // Resultado de acordo com a opcao escolhida

    switch(opcao) {
    case 1:
        printf("\nOpcao 1 foi escolhida");
        break;
    case 2:
        printf("\nOpcao 2 foi escolhida");
        break;
    case 3:
        printf("\nOpcao 3 foi escolhida");
        break;
    default:
        printf("\nOpcao invalida");
        break;
    }
  }
}
