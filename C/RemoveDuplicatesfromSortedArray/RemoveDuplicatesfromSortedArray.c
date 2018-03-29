int removeDuplicates(int* nums, int numsSize) {
    int j = 0;
    for(int i = 1; i < numsSize; i++) {
        if(nums[i] != nums[i-1]) {
            nums[++j] = nums[i];
        }
    }
    return numsSize != 0 ? j+1 : 0;
}
