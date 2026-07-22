#include <stdio.h>
int main () {
    int count = 0;
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        int num;
        scanf("%d", &num);
        if( num > 0 && num <= 100 ){
            count++;
        }
    }
    printf("%d", count);   

    return 0;

}