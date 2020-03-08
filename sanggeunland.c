#include <stdio.h>
int minn(int a, int b, int c);

int main()
{
    int ham1, ham2, ham3, coke, said;
    scanf("%d%d%d%d%d", &ham1, &ham2, &ham3, &coke, &said);

    printf("%d", minn(ham1, ham2, ham3) + minn(coke, said, 2000) - 50);

    return 0;
}

int minn(int a, int b, int c)
{
    if (a > b)
    {
        if (b > c)
        {
            return c;
        }
        else
        {
            return b;
        }
    }
    else
    {
        if (a > c)
        {
            return c;
        }
        else
        {
            return a;
        }
    }
}
