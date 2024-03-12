#include <stdio.h>


double felszin(double r) {
    return 4 * 3.14 * r * r;
}


double terfogat(double r) {
    return (4.0/3.0) * 3.14 * r * r * r;
}


double get_double() {
    double r;
    printf("Adja meg a gömb sugarát: ");
    scanf("%lf", &r);
    return r;
}

int main() {
    double r = get_double();

    printf("A gömb felszíne: %.2f\n", felszin(r));
    printf("A gömb térfogata: %.2f\n", terfogat(r));

    return 0;
}
