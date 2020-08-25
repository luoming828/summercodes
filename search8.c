/*��������Ϸ�Ĺ������£�

ÿ����Ϸ��ϵͳ�����?1?��?n ���ѡ��һ�����֡� �����ѡ�������ĸ����֡�
�����´��ˣ�ϵͳ������㣬��²�����ֱ�ϵͳѡ���������Ǵ��˻���С�ˡ�
�����ͨ������һ��Ԥ�ȶ���õĽӿ� guess(int num) ����ȡ�²���������ֵһ���� 3 �ֿ��ܵ������-1��1 �� 0����


*/
/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

int guessNumber(int n)
{
	int start=1,end=n,mid,tmp;
    while(start<end)
    {
        mid=start+(end-start+1)/2;
        tmp=guess(mid);
        if(tmp==0)
        {
            return mid;
        }
        else if(tmp==-1)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
    return start;
}
