/*����һ����������salary��������ÿ�������� Ψһ�ģ�����salary[i] �ǵ�i��Ա���Ĺ��ʡ�

���㷵��ȥ����͹��ʺ���߹����Ժ�ʣ��Ա�����ʵ�ƽ��ֵ��*/
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


