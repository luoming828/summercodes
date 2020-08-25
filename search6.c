/*��ֵԪ����ָ��ֵ������������ֵ��Ԫ�ء�

����һ����������nums������ nums[i] �� nums[i+1]���ҵ���ֵԪ�ز�������������

������ܰ��������ֵ������������£������κ�һ����ֵ����λ�ü��ɡ�
��*/
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


