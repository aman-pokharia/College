#include <stdio.h>

int sumOfDigits(int n) {
    if (n == 0) return 0;
    return (n%10) + sumOfDigits(n / 10);
}
int main() {
    int num;
    printf("Enter a 5-digit number: ");
    scanf("%d", &num);

    if(num < 10000 || num > 99999) {
        printf("Please enter a valid 5 digit number.");
        return 0;
    }
    printf("Sum of digits: %d", sumOfDigits(num));
    return 0;
}