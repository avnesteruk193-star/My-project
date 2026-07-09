#include  <stdio.h>
int main() {

    float x,y,z;

    printf("Enter three numbers with space between them: ");
    
    scanf ( "%f %f %f", &x, &y, &z);
    
    float c = ( x+ y + z ) / 3;        
    
    printf("The average is: %f", c); 


    return 0;

}


