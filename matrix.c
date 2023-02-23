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
        int arr2[count], count2 = 0, f;
        for (int i = 0; i < count; i++)
        {
            f = 1;
            if (i == 0)
            {
                arr2[0] = arr[0];
                count2++;
            }
            for (int j = 0; j < count2; j++)
            {
                if (arr[i] == arr2[j])
                {
                    f = 0;
                    break;
                }
            }
            if (f == 1)
            {
                arr2[count2] = arr[i];
                count2++;
            }
        }
        for (int i = 0; i < count2; i++)
        {
            printf("%d", arr2[i]);
            if (i != count2 - 1)
                printf(" ");
        }
    }

    return 0;
}