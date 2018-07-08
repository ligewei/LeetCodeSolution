#include <stdio.h>


int numJewelsInStones(char* J, char* S) {
    int n = 0;

    while (*S)
    {
        char *p = J;
        while (*p)
        {
            if (*S == *p)
            {
                n++;
                break; 
            }
            else
                p++;
        }
        S++;
    }

    return n;
}
int main()
{
    printf("%d\n", numJewelsInStones("aA", "aAAbbbb"));
    printf("%d\n", numJewelsInStones("z", "ZZ"));
    printf("%d\n", numJewelsInStones("abc", "aaabbbccc"));
    
    return 0;
}
