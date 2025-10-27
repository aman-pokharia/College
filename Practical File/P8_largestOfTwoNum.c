#include <stdio.h>

int main() {
    int a, b;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter a number: ");
    scanf("%d", &b);
    a > b ? printf("%d is bigger", a) : printf("%d is bigger", b);
    
    return 0;
}