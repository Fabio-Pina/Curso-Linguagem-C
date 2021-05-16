#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
void main() {

    // Definindo Varivaveis
    int a = 4, opcao = 1;
    float b = 2.5;
    char c = 'x';

    // Condição Simples
    if(a == 5) {
        printf("A variável a = 5");
    }

    if (b == 2.5) {
        printf("A variável b =2.5");
    }

    if(c == 'x') {
        printf("\n A variavel c = letra x");
    }

    // Numero par ou impar

    if (a % 2 == 1) {
        printf("\n A variável é impar");
    } else {
        printf("\n A variável a é par");
    }

    // Condicional Composta
    if (opcao == 1) {
        printf("\n A opcao = 1");
    } else if (opcao == 2) {
        printf("\n A opcao = 2");
    }

    // Pausa o programa após executar
    // system("pause");
}
