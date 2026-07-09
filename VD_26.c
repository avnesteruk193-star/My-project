#include <stdio.h>
int main () {
    float c1,c2;
    
    char znak; 
    printf("Enter two numbers and a sign {+,  -, *, /} : ");
    
    scanf("%f %f %c", &c1, &c2, &znak);
    
    float result = 0;

     
    switch (znak) {
        case '+':
            result = c1 + c2;
            break;
        case '-':
            result = c1 - c2;
            break;
        case '*':
            result = c1 * c2;
            break;
        case '/':
            if (c2 == 0) {
                printf ("Zle zadana volba");
                return -1;
            }
            result = c1 / c2;
            break;
            
        default: 
            printf("Zle zadana volba");
    }

    printf("The result is : %.2f %c %.2f = %.2f",c1, znak, c2, result );
    return 0;

}