#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {

    // Permite usar acentos
    setlocale(LC_ALL,"");

    // Imprime Olá
    printf("Olá \n");

    int a = 50;
    printf("O valor de a é = %d \n", a);
    scanf("%d", &a);
    printf("O valor de a mudou para %d", a);

    float b = 5.5;
    printf("O valor de b é = %f \n", b);
    scanf("%d", &a);
    printf("O valor de a mudou para %f", b);

    char letra = 't';
    printf("O valor de c é = %c /n", letra);
    fflush(stdin);
    scanf("%c", &letra);
    printf("O valor de c mudou para %c", letra);
}
