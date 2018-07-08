#include<stdio.h>
#include<limits.h>

int reverse(int x)
{
    int ret = 0;
    while (x)
    {
        if (ret > INT_MAX/10 || ret < INT_MIN/10)
        {
            return 0;
        }

        ret *= 10;
        ret += x % 10;
        x = x / 10;
    }

    return ret;
}

int main()
{
    int a = 12345678;
    int b = -12345;
    int c = 1534236469;

    printf("%d\n", reverse(a));
    printf("%d\n", reverse(b));
    printf("%d\n", reverse(c));

    return 0;
}
