#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

int hammingWeight(uint32_t n) {
    int cnt = 0;

    while (n >= 1)
    {
        if (n & 1)
            cnt++;
        n >>= 1;
    }

    return cnt;
}
int main()
{
    printf("%d\n", hammingWeight(1));
    printf("%d\n", hammingWeight(2));
    printf("%d\n", hammingWeight(3));
    printf("%d\n", hammingWeight(4));
    printf("%d\n", hammingWeight(12));
    printf("%d\n", hammingWeight(128));

    return 0;
}
