#include <stdio.h>




int main () {
    int N;
    printf("Enter number of numbers: ");
    scanf(" %d", &N);
    float num;
    float min = 0;
    float max = 0;

    printf("Enter %d numbers: ",N);

    for (int i = 0; i <= N; i++ ){
        scanf("%f", &num);
        
        if (i == 0) {
            min = num;
            max = num;
        }

        if (num < min) min = num;
        if (num > max) max = num;

    }
    printf(" min num is: %.2f\n", min);
    printf(" max num is: %.2f\n", max);
    return 0;

}