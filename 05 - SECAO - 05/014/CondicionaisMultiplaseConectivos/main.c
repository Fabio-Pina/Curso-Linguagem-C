#include <stdio.h>
#include <stdlib.h>

void main() {
    int a = 10;

    // Conectivo Lógico E (AND), Se uma comparacao for Falsa, não entra no bloco
    if(a > 5 && a > 15) {
        printf("\n A variavel 'a' esta entre 5 e 15 ");
    }

    // Conectivo Lógico OU (OR), Se uma comparacao for Verdadeira, na entra no bloco
    if(a > 5 || a > 15) {
        printf("\n A variável 'a' esta entre 5 e 15 ");
    }

    // Mistrurando Conectivos
    if ((a > 5 && a < 15) || a == 20) {
        printf("\n A variável 'a' esta entre 5 e 15 ou ela vale 20 ");
    }

}
