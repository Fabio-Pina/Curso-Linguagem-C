#include <stdio.h>
#include <stdlib.h>

int main() {

    int a = 2;
    char b = 'x';

    if(a == 1) {
        printf("\n Opcao escolhida: 1");
    } else if (a == 2) {
        printf("\n Opcao escolhida: 2");
    } else if(a == 3) {
        printf("\n Opcao escolhida: 3");
    } else
        printf("\n Opcao invalida");
    }

    switch(a) {
        case 1:
            printf("\n Opcao escolhida: 1");
            break;
        case 2:
            printf("\n Opcao escolhida: 2");
            break;
        case 3:
            printf("\n Opcao escolhida: 2");
            break;
        default:
            printf("\n Opcao invalida");
            break;
    }

    // Switch com Char
    switch(b) {
        case 'x';
            printf("\n A letra é x);
            break;
        default:
            printf("\n Opcao invalida );
            break;
    }

    system("pause");

    }
