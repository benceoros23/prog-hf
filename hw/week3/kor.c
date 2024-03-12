#include <stdio.h>


double kerulet(int r) {
    return 2 * 3.14 * r;
}


double terulet(int r) {
    return 3.14 * r * r;
}

int main() {
    int r;

    printf("Adja meg a kör sugarát: ");
    scanf("%d", &r);

    printf("A kör kerülete: %.2f\n", kerulet(r));
    printf("A kör területe: %.2f\n", terulet(r));

    return 0;
}
