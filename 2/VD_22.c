#include <stdio.h>
int main() {
    float hmotnost, vyska;

    printf("Enter weight in kg and height in cm : ");

    scanf("%f %f", &hmotnost, &vyska);
    
    float bmi = (hmotnost / (vyska * vyska) ) * 10000;

    printf("BMI: %.3f\n", bmi);

    return 0;

}