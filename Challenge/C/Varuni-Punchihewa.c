// https://github.com/Varuni-Punchihewa

#include <stdio.h>

int main()
{
    for (int i = 1; i <= 100; i++)
    {

        if (i % 3 == 0 && i % 5 == 0)
        {
            printf("Spider\n");
        }
        else if (i % 3 == 0)
        {
            printf("Rat\n");
        }
        else if (i % 5 == 0)
        {
            printf("Ghost\n");
        }
        else
        {
            printf("%d\n", i);
        }
    }

    return 0;
}