#include<stdio.h>
#include<stdlib.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target) {
    for (int i = 0; i < numsSize; i++)
    {
    	for (int j = i+1; j < numsSize; j++)
    	{
    		if (nums[i] + nums[j] == target)
    		{
    			int *p = (int *)malloc(2*sizeof(int));
    			p[0] = i;
    			p[1] = j;
    			return p;
    		}
    	}
    }

    return NULL;
}

int main()
{
	int nums[] = {3, 7, 11, 15, 5, 4};
	int target = 9;
	int *p = twoSum(nums, sizeof(nums)/sizeof(int), target);

	if (p)
	{
		printf("%d, %d\n", p[0], p[1]);
	}
	else
	{
		printf("No Solution!\n");
	}
	
	return 0;
}
