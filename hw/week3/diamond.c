#include <stdio.h>

int main() {
    int height;

    
    printf("Magassag: ");
    scanf("%d", &height);

    
    if (height <= 0 || height % 2 == 0) {
        printf("Hiba: A magassagnak pozitiv paratlan szamnak kell lennie.\n");
        return 1; 
    }

    
    for (int i = 0; i < height / 2 + 1; i++) {
        for (int j = 0; j < height / 2 - i; j++) {
            printf(" ");
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

   
    for (int i = height / 2 - 1; i >= 0; i--) {
        for (int j = 0; j < height / 2 - i; j++) {
            printf(" ");
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
