/*给定两个数组，编写一个函数来计算它们的交集。*/
void SelectSort(int *nums,int numsSize)
{

	int min,temp,i,j;
	for(i=0;i<numsSize-1;i++)
	{
		min=i;
        for(j=i+1;j<numsSize;j++){
            if(nums[min]>nums[j]){
                min=j;
			}
		
        }
        if(min!=i){
            temp=nums[min];
            nums[min]=nums[i];
            nums[i]=temp;
        }
    } 
}

int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int temp,i,j;
    int *result=(int *)malloc(nums2Size*sizeof(int));

    //选择排序
    SelectSort(nums1,nums1Size);
    SelectSort(nums2,nums2Size);

    *returnSize=0;
    temp=nums1[nums1Size-1]+1;  //给temp赋一个不可能与nums1或nums2冲突的值
    for(i=0,j=0;i<nums1Size&&j<nums2Size;){
        if(nums1[i]>nums2[j]){
            j++;
        }
        else if(nums1[i]<nums2[j]){
            i++;
        }
        else{
            if(temp!=nums1[i]){
                result[(*returnSize)++]=nums1[i];
                temp=nums1[i];
            }
            i++;
            j++;

        }
    }
    return result;
}
	





