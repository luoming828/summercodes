/*给定两个数组，编写一个函数来计算它们的交集。
*/
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize)
{
    int i,j,k;
    int *p;
    int index[1000] = {0};
    int cnt = 0;
    int flag = 0;
    *returnSize = 0;
    for (i = 0; i < nums1Size; i++) 
	{
        flag = 0;
        for (k = 0; k < i; k++) 
		{
            if (nums1[k] == nums1[i])
			{
                flag = 1;
                break;
            }
        }
        if (flag == 1)
			continue;
        for (j = 0; j < nums2Size; j++)
		{
            if (nums1[i] == nums2[j])
			{
                index[i] = 1;
                (*returnSize)++;
                break;
            }
        }
    }

    p = (int *)malloc(sizeof(int)*(*returnSize));
    i = 0;
    while (1) 
	{
        if (index[cnt] == 1)
		{
            p[i] = nums1[cnt];
            i++;
        }
        cnt++;
        if (i >= *returnSize) 
		{
            break;
        }
    }
    return p;
}
