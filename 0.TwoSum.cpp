/*****************************************************************************
 * @file Two_sum.cpp
 * @author Jose Luis Figueroa
 * @brief Given an array of integers nums and an integer target, return 
 * indices of the two numbers such that they add up to target. 
 * You may assume that each input would have exactly one solution, and you may
 * not use the same element twice. 
 * You can return the answer in any order.
 * 
 * Example 1:
 * Input: nums = [2,7,11,15], target = 9
 * Output: [0,1]
 * Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
 * 
 * Example 2:
 * Input: nums = [3,2,4], target = 6
 * Output: [1,2]
 *
 * Example 3:
 * Input: nums = [3,3], target = 6
 * Output: [0,1]
 * 
 * Note: The returned array must be allocated with new, assume caller calls delete[].
 * 
 * @version 0.1
 * @date 2024/03/29
 * 
 * @copyright Copyright (c) 2023
 * 
 *****************************************************************************/
#include<stdio.h>
#include<stdint.h>

/*****************************************************************************
* Function Prototypes
*****************************************************************************/
int * twoSum(int* nums, int numsSize, int target, int* returnSize);

/*****************************************************************************
* Variables
*****************************************************************************/
int numsSize = 3;
int nums[] = {2, 7, 11, 15};
int target = 9;
int returnSize = 0;


int main()
{
    int * output = twoSum(nums, numsSize, target, &returnSize);

    delete[] output;

    return 0;
}

/*****************************************************************************
* Function Implementation
*****************************************************************************/
int * twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    /*Assign the number of returned index. They are fixed to 2*/
    *returnSize = 2;
    /*Dynamically allocate memory using new*/
    int* output = new int[*returnSize];

    for(int i=0; i<numsSize; i++)
    {
        for(int y=i+1; y<numsSize; y++)
        {
            if((nums[i] + nums[y]) == target)
            {
                output[0] = i;
                output[1] = y;
                break;
            }
        }
    }
    return output;
}