#include <stdio.h>

int fact(int n) {
    if (n == 0){
        return 1;
    }
    return n * fact(n - 1);
}

int main() {
    int n;
    printf("Enter a non-negative integer: ");
    do {
        scanf("%d", &n);
    } while (n < 0);

    int result = fact(n);
    printf("The factorial result of %d is: %d\n", n, result);
    return 0;

}