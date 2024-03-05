#include <stdio.h>

int main() {
    int szam, pozitiv_db = 0, negativ_db = 0;

    

    do {
        printf("Egesz szam (vege: 0):");
        scanf("%d", &szam);

        if (szam > 0)
            pozitiv_db++;
        else if (szam < 0)
            negativ_db++;

    } while (szam != 0);

    printf("Pozitív elemek száma: %d\n", pozitiv_db);
    printf("Negatív elemek száma: %d\n", negativ_db);

    return 0;
}
