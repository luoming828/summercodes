/*高次方求模*/
int RFS(int a,int b,int c)
{
	int temp;
    if(b==1)
    {
        return a%c;
    }
	temp = RFS(a,b>>1,c)%c;
    if(b%2==0)
    {
        return (temp*temp)%c;
    }
    return (a*(temp*temp))%c;
}