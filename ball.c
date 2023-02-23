#include <stdio.h>
#include <math.h>

int main()
{
    double P = 21500;
    double R, m;
    if (scanf("%lf", &R) == 1 && getchar() == '\n')
    {
        m = P * (double)4 / (double)3 * M_PI * R * R * R;
        m = round(m);
        printf("%0.0lf", m);
    }

    else
    {
        printf("n/a");
    }

    return 0;
}