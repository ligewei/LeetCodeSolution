#include<stdio.h>
#include<stdbool.h>

bool isPowerOfThree(int n)
{
    return (n>0) ? !(1162261467%n) : false;
}

int main()
{
    printf("%d, %d, %d\n",
            isPowerOfThree(3),
            isPowerOfThree(27),
            isPowerOfThree(10)
            ); 

    return 0;
}
