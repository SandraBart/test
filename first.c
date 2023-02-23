#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    int count = 0;
    char ch[100];
    while ((c = getchar()) != '\n')
    {
        if (count == 0)
        {
            if (c >= 'a' && c <= 'z')
                ch[count] = (char)(int)c - 32;
            else
                ch[count] = c;
        }
        else
        {
            if (c >= 'a' && c <= 'z' && ch[count - 1] == ' ')
                ch[count] = (char)(int)c - 32;
            else
                ch[count] = c;
        }
        count++;
    }

    for (int i = 0; i < count; i++)
    {
        printf("%c", ch[i]);
    }

    return 0;
}