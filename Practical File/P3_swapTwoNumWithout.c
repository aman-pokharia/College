#include <stdio.h>

int main() {
    int a, b;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter a number: ");
    scanf("%d", &b);
    printf("The numbers you entered were %d and %d\n", a, b);
    a += b;
    b = a - b;
    a -= b;
    printf("Numbers swapped: %d,%d\n", a, b);
    
    return 0;
}