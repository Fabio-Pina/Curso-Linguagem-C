#include <stdio.h>
#include <stdlib.h>

void main() {

    // Definindo variveis
    int a = 6, b = 3;

    // Soma
    printf("\n A soma entre %d e % d = %d", a , b, a + b);

    // Subtração
    printf("\n A subtracacao entre %d e %d = ", a, b, a - b);

    // Divisão
    printf("\n A divisao entre %d e %d =  ", a, b, a / b);

    // Multiplicacao
    printf("\n A multiplicao entre %d e %d =  ", a, b, a * b);

    // Resto da Divisão
    printf("\n A resto da divisao entre %d e %d =  ", a, b, a / b);

    // Valor Absoluto
    printf("\n A valor absoluto de -3 = %d", abs(-3));

    // pausa o programa apos executar
    system("pause");
}
