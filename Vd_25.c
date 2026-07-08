#include <stdio.h>
int main () {
    float c1,c2;
    
    char znak; 
    printf("Enter two numbers and a sign {+,  -, *, /} : ");
    
    scanf("%f %f %c", &c1, &c2, &znak);
    
    float result = 0;

    if(znak == '+' ){
        result = c1 + c2;
    }  
    else if (znak == '-') {
        result = c1 -c2;
    }
    else if (znak == '*') {
        result = c1 * c2;

    }
    else if (znak == '/') {
        if (c2 == 0) {
            printf("Invalid num2"); 
            return -1;
        }
        result = c1 / c2;
    }
    else {
        printf("Wrong sign");
    }

    printf("The result is : %.2f %c %.2f = %.2f",c1, znak, c2, result );
    return 0;

}