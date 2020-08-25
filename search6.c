/*峰值元素是指其值大于左右相邻值的元素。

给定一个输入数组nums，其中 nums[i] ≠ nums[i+1]，找到峰值元素并返回其索引。

数组可能包含多个峰值，在这种情况下，返回任何一个峰值所在位置即可。
。*/
int findPeakElement(int* nums, int numsSize){
    int low = 0;
    int high = numsSize-1;
    int mid = 0;

    while(low < high)
    {
        mid = (low + high) / 2;  
        if(nums[mid] > nums[mid + 1])
        {
            high=mid;
        }
        else
        {
            low=mid+1;
        }
    }

    return low;
}


