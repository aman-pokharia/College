#include <stdio.h>

int main() {
    int fahreinheit;
    float degree;
    printf("Enter temperature in fahreinheit: ");
    scanf("%d", &fahreinheit);
    degree = ((fahreinheit - 32) * 5 )/ 9;
    printf("Temperature in degree: %f", degree);
    return 0;
}