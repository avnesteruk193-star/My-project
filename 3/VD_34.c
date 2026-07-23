#include <stdio.h>
int main (){
    int n;
    scanf("%d", &n);

    if (n < 1 || n > 15) {
        printf("Invalid input. Please enter a number between 1 and 15.\n");
        return 0;
    }

    int k = n;

    for (int j = 1; j <= k; j++) {
        printf("%d: ", j);
        for (int i = n; i >= 1; i--) {
                printf("%d ", i);
            }
        n -=1;
        printf("\n");

    }
    return 0;
}
