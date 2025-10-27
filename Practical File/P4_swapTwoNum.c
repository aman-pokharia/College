#include <stdio.h>

int main() {
    printf("swapping of two numbers with thrid variable\n");
    int a, b, c;
    printf("Enter the value of a and b\n");
    scanf("%d\n%d", &a, &b);
    printf("The numbers you entered were %d and %d\n", a, b);

    c = a;
    a = b;
    b = c;
    printf("Numbers swapped: %d,%d", a, b);
    
    return 0;
}