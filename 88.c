#include<stdio.h>

void merge(int* nums1, int m, int* nums2, int n)
{
   int t = m + n -1;
   m--;
   n--;
   while(m>=0 && n>=0)
   {
       nums1[t--] = nums1[m] > nums2[n] ? nums1[m--] : nums2[n--];
   }

   while (n>=0)
   {
       nums1[t--] = nums2[n--];
   }
}

int main()
{
    int a[100] = {1,2,3,7,8,9};
    int b[8] = {11,12,13,14,15,16,17,18};

    merge(a, 6, b, 8);

    for (int i = 0; i < 15; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}
