/*给你一个有效的 IPv4 地址 address，返回这个 IP 地址的无效化版本。

所谓无效化 IP 地址，其实就是用 "[.]" 代替了每个 "."。*/
char * defangIPaddr(char * address)
{
    int len = strlen(address);

    char *a = (char*)malloc(sizeof(char)*len+7);

    for (int i = 0, j = 0; i < len; i++, j++) 
	{
        if (address[i] == '.') 
		{
            a[j] = '[';
            a[++j] = '.';
            a[++j] = ']';
        }
		else
		{
            a[j] = address[i];
        }
    }
    a[len+6] = '\0';//IP有三个.所有会增加三组[]

    return a;
}

