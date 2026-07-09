#include  <stdio.h>
int main () {
    int num1,num2,num3,num4,num5;
    int result;

    //1 block
    printf("Enter five numbers: \t\t\t" );
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

    result = num5 / --num1 * num2++ / num3++;
    printf("Vystup pre ukazkovy vstup: %d", result);
    //2 block
    printf("\nEnter five numbers: \t\t\t");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);


    num1 %= num2 = num4 = 1 + num5 / 2;
    result = num1;
    printf("Vystup pre ukazkovy vstup: %d", result);
    return 0;

}
