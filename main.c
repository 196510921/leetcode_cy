/*************************************************************************
	> File Name: main.c
	> Author: yong
	> Mail: 18516531955@163.com 
	> Created Time: Tue 09 Apr 2019 06:37:00 AM PDT
 ************************************************************************/

#include<stdio.h>
/*test case*/
static void twoSum_testCase(void);

/*Algorithm*/
//Two Sum
static int* twoSum(int* nums, int numsSize, int target);

int main(int argc, char* argv[])
{
    twoSum_testCase();
	
	return 1;
}

/**test case***********************************************************/
static void twoSum_testCase(void)
{
    int* indices = NULL;
	int nums[4]  = {-3,7,3,15};
	int target   = 0;

	indices = twoSum(nums, sizeof(nums), target);
	if(NULL == indices)
	{
	    printf("Error!\n");
		return;
	}
        
    printf("indices:[%d,%d]\n",indices[0], indices[1]);
}

/**Algorithm***********************************************************/

/**Easy****************************************************************/

/**
 *Two Sum
 *Given an array of integers,return indices of the two numbers such 
  that they add up to a specific target.You may assume that each input
  would have exactly one solution,and you may not use the same elements
  twices.
 *Example:Given nums = [2,7,11,15], target = 9,
  Because nums[0] + nums[1] = 2 + 7 = 9,
  return [0, 1];
 */
 static int* twoSum(int* nums, int numsSize, int target)
 {
     int i          = 0;
	 int j          = 0;

	 for(i = 0; i < numsSize; i++)
	 {
		 for(j = i+ 1; j < numsSize; j++)
		 {
		     if((nums[i] + nums[j]) == target)
			 {
			     nums[0] = i;
				 nums[1] = j;
				 return nums;
			 }
		 }
	 }
 }



