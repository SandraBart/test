#include <stdio.h>
#include <stdlib.h>

#include "data_process.h"
#include "data_stat.h"
#include "data_io.h"

int main()
{
    int n;
    double *data = (double *)malloc(sizeof(double) * n);

    if (input(data, &n) == 0)
    {

        if (normalization(data, n) == 1)
        {
            output(data, &n);
        }
        else
        {
            printf("ERROR");
        }
    }
    free(data);
    return 0;
}