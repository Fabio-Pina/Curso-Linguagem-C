#include <stdio.h>
#include <stdlib.h>

void main() {

    int a = 1, b = 10;

    while (a <= 10) {
        printf("\n%d", a);
        a++;

    }

    a = 1;

    do {

        printf("\n%d", a);
        a++;

    } while(a <= 10);
}
