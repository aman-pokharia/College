#include <stdio.h>
#include <math.h>

int main() {
    float a, r, sum;
    int n;
    printf("Enter first term a, common ratio r and number of terms n: ");
    scanf("%f %f %d",&a, &r, &n);
    if (n != 1)
    {
        sum = a * (1-pow(r,n))/(1-r);
    } else {
        sum = a*n;
    }
    printf("Sum of geometric series is: %f\n", sum);
    return 0;
}
