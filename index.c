#include <stdio.h>

int power(int r, int n)
{
    int ans;
    for (int i = 0; i < n; i++)
    {
        ans *= r;
    }
    return ans;
}

int main()
{
    int result = power(2, 4);
    printf("%d", result);
}