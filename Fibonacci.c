#include <stdio.h>

int main() {
    int firstNum = 0, secondNum = 1, thirdNum, i, number;
    printf("Enter the number of elements: ");
    scanf("%d", &number);
    for (i = 0; i <= number; i++)
    {
        thirdNum = firstNum + secondNum;
        printf("%d\n", thirdNum);
        firstNum = secondNum;
        secondNum = thirdNum;
    }
    
    return 0;
}