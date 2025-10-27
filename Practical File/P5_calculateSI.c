#include <stdio.h>

int main() {
    int p, r, t;
    float simple_interest;
    printf("Enter principle amount: ");
    scanf("%d", &p);
    printf("Enter rate: ");
    scanf("%d", &r);
    printf("Enter time period: ");
    scanf("%d", &t);
    simple_interest = (p*r*t)/100;
    printf("The simple interest is: %f", simple_interest);
    return 0;
}