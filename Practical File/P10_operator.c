#include <stdio.h>

int main() {
    int a, b;
    printf("Enter your first number: ");
    scanf("%d", &a);
    printf("\nEnter your second number: ");
    scanf("%d", &b);
    //Arithematic operator
    printf("\nAddition: %d + %d = %d", a, b, a+b);
    printf("\nSubtraction: %d - %d = %d: ", a, b, a-b);
    printf("\nMultiplication: %d * %d = %d: ", a, b, a*b);
    b == 0 ? printf("\nDivision by 0 is not possible") : printf("\nDivision: %d / %d = %f: ", a, b, (float)a/b);
    b == 0 ? printf("\nModulus is not defined") : printf("\nModulus: %d %% %d = %d: ", a, b, a%b);
    //Relational Operator
    if (a > b) {
        printf("\nGreater than: %d > %d", a, b);
    } else if (b > a) {
        printf("\nLess than: %d < %d", a, b);
    } else {
        printf("\n %d = %d", a, b);                                                 
    }
    //Logical Operator
    printf("\nLogical and: %d&&%d = %d", a, b, a&&b);
    printf("\nLogical or: %d||%d = %d", a, b, a||b);
    printf("\nLogical not for a: !%d", !a);
    printf("\nLogical not for b: !%d", !b);

    return 0;
}