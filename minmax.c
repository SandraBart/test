#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[100];
    int x, f = 1, count = 0;
    char end;
    do
    {
        if (scanf("%d", &x) == 1 && ((end = getchar()) == ' ' || end == '\n') && (x >= 0 || x == -1))
        {
            if (x != -1)
            {
                arr[count] = x;
                count++;
            }
        }
        else
        {
            f = 0;
            break;
        }
    } while (x != -1);
    if (f == 0)
        printf("n/a");
    else
    {
       int max = arr[0], min = arr[0], i_max = 0, i_min = 0;
        for (int i = 1; i < count; i++)
        {
            if (max < arr[i])
            {
                max = arr[i];
                i_max = i;
            }
            if (min > arr[i])
            {
                min = arr[i];
                i_min = i;
            }
        }
        int tmp = arr[i_min];
        arr[i_min] = arr[i_max];
        arr[i_max] = tmp;

            for (int j = 0; j < count; j++)
            {
            printf("%d", arr[j]);
            if (j != count - 1)
                printf(" ");
        }
    }


    return 0;
}