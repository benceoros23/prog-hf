#include <stdio.h>


int kerulet(int a, int b) {
    return 2 * (a + b);
}


int terulet(int a, int b) {
    return a * b;
}

int main() {
    int a, b;

    printf("Adja meg a téglalap egyik oldalának hosszát: ");
    scanf("%d", &a);

    printf("Adja meg a téglalap másik oldalának hosszát: ");
    scanf("%d", &b);

    printf("A téglalap kerülete: %d\n", kerulet(a, b));
    printf("A téglalap területe: %d\n", terulet(a, b));

    return 0;
}
