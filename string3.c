/*
ÿ������ʼ�����һ���������ƺ�һ��������ɣ��� @ ���ŷָ���

���磬�� alice@leetcode.com�У� alice �Ǳ������ƣ��� leetcode.com ��������

����Сд��ĸ����Щ�����ʼ������ܰ��� '.' �� '+'��

����ڵ����ʼ���ַ�ı������Ʋ����е�ĳЩ�ַ�֮����Ӿ�㣨'.'��������������ʼ�����ת��������������û�е��ͬһ��ַ�����磬"alice.z@leetcode.com�� �� ��alicez@leetcode.com�� ��ת����ͬһ�����ʼ���ַ�� ����ע�⣬�˹�����������������

����ڱ�����������ӼӺţ�'+'���������Ե�һ���Ӻź�����������ݡ����������ĳЩ�����ʼ������� m.y+name@email.com ��ת���� my@email.com�� ��ͬ�����˹�����������������

����ͬʱʹ������������

���������ʼ��б� emails�����ǻ����б��е�ÿ����ַ����һ������ʼ���ʵ���յ��ʼ��Ĳ�ͬ��ַ�ж��٣�*/
int numUniqueEmails(char ** emails, int emailsSize){
    int i=0,j=0,cnt=0,sum=0,flag=0,right=0;
    char special[100][110]={0};//special���ֵ����ã�����������в��ظ����ַ���
    for(i=0;i<emailsSize;i++)
    {
        char tmp[110]={0};
        cnt=0;//ÿ��ʹ��ǰ��������
        flag=0;//ÿ��ʹ��ǰ��������
        for(j=0;j<strlen(emails[i]);)
        {
            if((emails[i][j]>='a'&&emails[i][j]<='z')||(emails[i][j]>='0'&&emails[i][j]<='9'))//��ĸ������
            {
                tmp[cnt]=emails[i][j];
                cnt++;
                j++;
            }
            else if(emails[i][j]=='.'&&flag==0)//'@'ǰ���'.'������
            {
                j++;
            }
            else if(emails[i][j]=='@')//'@'
            {
                tmp[cnt]=emails[i][j];
                cnt++;
                j++;
                flag=1;
            }
            else if(emails[i][j]=='.'&&flag==1)//'@'�����'.'���ܺ���
            {
                tmp[cnt]=emails[i][j];
                cnt++;
			}
		}
	}
}

