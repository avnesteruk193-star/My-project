#include <stdio.h>
#include <ctype.h>
int main () {
    char letter1, letter2;
    
    printf("Enter two letters: ");
    
    scanf(" %c %c", &letter1, &letter2);
    
    letter1 = toupper (letter1);
    letter2 = toupper (letter2);
    printf("The capital leters are : \n %c %d \n %c %d ", letter1, letter1,  letter2, letter2);

    return 0;

}