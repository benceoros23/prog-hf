#include <stdio.h>

int main() {
    int magassag;
    printf("magasság:");
    scanf("%d", &magassag);
    
    int i, j;
    for (i = 1; i <= magassag; i++) {
        for (j = 1; j <= magassag - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("#");
        }
        printf("  ");
        for (j = 1; j <= i; j++) {
            printf("#");
        }
        printf("\n");
    }
    
    return 0;
}
