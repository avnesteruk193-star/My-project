#include <stdio.h>

int main() {
    int pole[11];
    int spravna = 1;  
printf("Enter 11 numbers: ");
    for (int i = 0; i < 11; i++) {
        scanf("%d", &pole[i]);
    }

    if (pole[0] < 0 || pole[0] > 10) {
        spravna = 0;   
    }

    for (int i = 1; i < 11; i++) {  
        if (pole[i] > 2 * pole[i - 1] || pole[i] < pole[i - 1] / 2.0) {
            spravna = 0;
        }
    }
    if (spravna) {
        printf("Postupnost je spravna\n");
    } else {
        printf("Postupnost nie je spravna\n");
    }

    return 0;
}