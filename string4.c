/*
给定一个由空格分割单词的句子 S。每个单词只包含大写或小写字母。

我们要将句子转换为 “Goat Latin”（一种类似于 猪拉丁文 - Pig Latin 的虚构语言）。

山羊拉丁文的规则如下：

如果单词以元音开头（a, e, i, o, u），在单词后添加"ma"。
例如，单词"apple"变为"applema"。

如果单词以辅音字母开头（即非元音字母），移除第一个字符并将它放到末尾，之后再添加"ma"。
例如，单词"goat"变为"oatgma"。

根据单词在句子中的索引，在单词最后添加与索引相同数量的字母'a'，索引从1开始。
例如，在第一个单词后添加"a"，在第二个单词后添加"aa"，以此类推。
返回将 S 转换为山羊拉丁文后的句子。

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
