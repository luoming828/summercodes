/*给你一个整数数组salary，数组里每个数都是 唯一的，其中salary[i] 是第i个员工的工资。

请你返回去掉最低工资和最高工资以后，剩下员工工资的平均值。*/
int cmp(const void *a, const void *b) 
{
    return (*(int *)a - *(int *)b);
}

double average(int* salary, int salarySize)
{
	int i;
    double sum = 0;
    qsort(salary, salarySize, sizeof(int), cmp);
    if (salarySize == 3) 
	{
        return salary[1];
    }

    for (i = 1; i < salarySize - 1; i++) 
	{
        sum += salary[i];
    }

    return sum / (salarySize - 2);
}


