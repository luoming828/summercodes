/*�����������飬��дһ���������������ǵĽ�����*/
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

    //ѡ������
    SelectSort(nums1,nums1Size);
    SelectSort(nums2,nums2Size);

    *returnSize=0;
    temp=nums1[nums1Size-1]+1;  //��temp��һ����������nums1��nums2��ͻ��ֵ
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
	





