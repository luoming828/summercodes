/*����һ��������·ͼ������·ͼ�е�������·������ paths ��ʾ������ paths[i] = [cityAi, cityBi] ��ʾ����·����� cityAi ֱ��ǰ�� cityBi �������ҳ�������е��յ�վ����û���κο���ͨ���������е���·�ĳ��С�

��Ŀ���ݱ�֤��·ͼ���γ�һ��������ѭ������·�����ֻ����һ�������յ�վ��

*/
char * destCity(char *** paths, int pathsSize, int* pathsColSize){
    int col = *pathsColSize;
    char *cur = paths[0][col-1];
    for(int i = 1; i < pathsSize; i++)
	{
        if(strcmp(cur,paths[i][0]) == 0)
		{
            cur = paths[i][col-1];
            i = 0;
            }
        }
    return cur;
}

