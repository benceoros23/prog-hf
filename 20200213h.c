#include <stdio.h>

int main() {
    int limit = 1000;
    int sum = 0;

    for (int i = 1; i < limit; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }

    printf("Azon 1000-nél kisebb számok összege, melyek 3-nak vagy 5-nek a többszörösei: %d\n", sum);

    return 0;
}
