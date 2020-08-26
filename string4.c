/*
����һ���ɿո�ָ�ʵľ��� S��ÿ������ֻ������д��Сд��ĸ��

����Ҫ������ת��Ϊ ��Goat Latin����һ�������� �������� - Pig Latin ���鹹���ԣ���

ɽ�������ĵĹ������£�

���������Ԫ����ͷ��a, e, i, o, u�����ڵ��ʺ����"ma"��
���磬����"apple"��Ϊ"applema"��

��������Ը�����ĸ��ͷ������Ԫ����ĸ�����Ƴ���һ���ַ��������ŵ�ĩβ��֮�������"ma"��
���磬����"goat"��Ϊ"oatgma"��

���ݵ����ھ����е��������ڵ�����������������ͬ��������ĸ'a'��������1��ʼ��
���磬�ڵ�һ�����ʺ����"a"���ڵڶ������ʺ����"aa"���Դ����ơ�
���ؽ� S ת��Ϊɽ�������ĺ�ľ��ӡ�

*/
int startwithyuanyin(char s) 
{
    if (s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u' || 
    s == 'A' || s == 'E' || s == 'I' || s == 'O' || s == 'U') {
        return 1;
    }
    return 0;
}

void MoveFirst(char *s, int len) 
{
    char tmp = s[0];
    for (int i = 1; i < len; i++) {
        s[i - 1] = s[i];
    }
    s[len - 1] = tmp;
}

char * toGoatLatin(char * S){
    if (S == NULL) {
        return S;
    }
    char *res = (char *)malloc(sizeof(char) *  10000);
    int index = 0;
    int num = 1;

    char *token = strtok(S, " ");
    while (token != NULL) {
        int len = strlen(token);
        if (startwithyuanyin(token[0])) {
            strncpy(res + index, token, len);
        } else {
            MoveFirst(token, len);
            strncpy(res + index, token, len);
        }
        index += len;
        res[index++] = 'm';
        res[index++] = 'a';

        for (int i = 0; i < num; i++) {
            res[index++] = 'a';
        }

        res[index++] = ' ';
        num++;
        token = strtok(NULL, " ");

    }
    res[index - 1] = '\0';
    return res;
}
