#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {

    // responsavel por alimentar o rand de forma diferente
    srand((unsigned)time(NULL));

    // Variavel que recebe o resto da divisão do numero por 3
    int aleatorioSegundo = rand() % 3;

    // Imprime o valor
    printf("%d", aleatorioSegundo);

    aleatorioSegundo = (rand() % 5) + 1;

    printf("%d", aleatorioSegundo);
}
