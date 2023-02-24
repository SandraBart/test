#include <stdio.h>
#include "data_io.h"

int input(double *data, int *n)
{
    if (scanf("%d", n) == 1)
    {
        for (double *i = data; i - data < *n; i++)
        {
            if (scanf("%lf", i) == 1)
            {
                else
                {
                    return -1;
                }
            }
        }
        return 0;
    }
}

void output(double *data, int *n)
{
    for (double *i = data; i - data < *n; i++)
    {
        printf("%lf ", *i);
    }
}