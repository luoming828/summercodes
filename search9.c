/*给你一个排序后的字符列表 letters ，列表中只包含小写英文字母。另给出一个目标字母target，请你寻找在这一有序列表里比目标字母大的最小字母。

在比较时，字母是依序循环出现的。举个例子：

如果目标字母 target = 'z' 并且字符列表为letters = ['a', 'b']，则答案返回'a'
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
	{     //做个特殊处理
        return letters[0];
    }
    return letters[high];

}
