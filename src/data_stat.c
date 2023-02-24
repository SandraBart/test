#include <stdio.h>
#include "data_stat.h"

double max(double *data, int n)
{
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (data[i] > max)
        {
            max = data[i];
        }
    }
    return max;
}
double min(double *data, int n)
{
    int min = 0;
    for (int i = 0; i < n; i++)
    {
        if (data[i] < min)
        {
            min = data[i];
        }
    }
    return min;
}
