#include <stdio.h>

int main()
{
    int n, r, s, l, b;
    printf("Enter a number (1,2,3):\n1: Rectangle\n2: Square\n3: Circle\nYour response: ");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("Enter length of rectangle: ");
        scanf("%d", &l);
        printf("Enter breadth of rectangle: ");
        scanf("%d", &b);
        printf("\nArea of rectangle is: %d", l * b);
        break;

    case 2:
        printf("Enter side of square: ");
        scanf("%d", &s);
        printf("\nArea of square is: %d", s * s);
        break;

    case 3:
        printf("Enter radius of circle: ");
        scanf("%d", &r);
        printf("\nArea of circle is: %f", (float)3.14159 * r * r);
        break;

    default:
        printf("Enter a number between 1 to 3.");
        break;
    }

    return 0;
}