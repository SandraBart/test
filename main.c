#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long long int factorial(int n);

int main()
{
    int n;
    if (scanf("%d", &n) == 1 && getchar() == '\n' && n >= 0)
    {
        long long int arr[n + 1];
        for (int k = 0; k <= n; k++)
        {
            arr[k] = factorial(n) / (factorial(k) * factorial(n - k));
        }
        for (int k = 0; k <= n; k++)
        {
            arr[k] = factorial(n) / (factorial(k) * factorial(n - k));
            printf("%lld", arr[k]);
            if (k != n)
                printf(" ");
        }
    }

    else
        printf("n/a");

    return 0;
}

long long int factorial(int n)
{
    long long int f;
    if (n == 0 || n == 1)
        f = 1;
    else
        f = factorial(n - 1) * n;
    return f;
}