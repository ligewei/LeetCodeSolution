#include <stdio.h>
#include <stdbool.h>

bool isPowerOfTwo(int n) {
    int cnt = 0;

    while (n > 0)
    {
        if (n & 1)
            cnt++;
        n >>= 1;
    }

    return cnt==1;
}
int main()
{
    printf("%d\n", isPowerOfTwo(1));
    printf("%d\n", isPowerOfTwo(2));
    printf("%d\n", isPowerOfTwo(3));
    printf("%d\n", isPowerOfTwo(4));
    printf("%d\n", isPowerOfTwo(12));
    printf("%d\n", isPowerOfTwo(128));

    return 0;
}
