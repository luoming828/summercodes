/*����һ���������ַ��б� letters ���б���ֻ����СдӢ����ĸ�������һ��Ŀ����ĸtarget������Ѱ������һ�����б����Ŀ����ĸ�����С��ĸ��

�ڱȽ�ʱ����ĸ������ѭ�����ֵġ��ٸ����ӣ�

���Ŀ����ĸ target = 'z' �����ַ��б�Ϊletters = ['a', 'b']����𰸷���'a'
*/
char nextGreatestLetter(char* letters, int lettersSize, char target){
    int low= 0;
    int high= lettersSize - 1;

    while (low< high) {
        int mid = low+ (high - low) / 2;

        if (letters[mid] > target).
		{
            high = mid;
        } else if (letters[mid] <= target) 
		{
            low = mid + 1;
        }
    }
    if (letters[high] <= target)
	{     //�������⴦��
        return letters[0];
    }
    return letters[high];

}
