#include <stdio.h>
#include <math.h>
int main(){
    
    float number;
    printf("Enter a number: ");
     
    scanf("%f", &number);

    int cele = (int)number;

    int desatinne = round(number);
    
    printf("The integer part is: %d\n", cele);
    printf("The decimal part is: %d\n", desatinne);
    return 0;

}