int* twoSum(int* nums, int numsSize, int target) 
{
 int* result = malloc(2*sizeof(int));
 result[0] = result[1] = 0;
 for(int i = numsSize -1 ; i > -1; i--)   
 {
    if(nums[i] <= target || target < 0)
    {
        for(int j = 0 ; j< numsSize; j++)   
        {
            if(i ^ j)
            {
                int temp = nums[i] + nums[j];
                if(temp == target)
                {
                    result[0] = i > j ? j + 1 : i + 1;
                    result[1] = j > i ? j + 1 : i + 1;

                   return result;
                }
            }
        }
    }
 }
 return result;
}