/*求矩形的并的面积*/

#include<cstdio>
#include<algorithm>
#include<cmath>
#include<cstring>
#define N 260
using namespace std;
struct node
{
	double x1,y1,x2,y2;
}s[N];
double x[N*2],y[N*2];
int vis[N*2][N*2];
int find(double *x,double t,int n)
{
	int l=0,r=n-1;
	while(l<=r)
	{
		int m=(l+r)>>1;
	    if(x[m]==t)
	    return m;
	    if(x[m]>t)
	    r=m-1;
	    else
	    l=m+1;
	}
	return -1;
}
int main()
{
	int n;
	while(~scanf("%d",&n)&&n)
	{
		double res=0;
		int nx=0,ny=0;
		memset(vis,0,sizeof(vis));
		for(int i=0;i<n;i++)
		{
		    scanf("%lf%lf%lf%lf",&s[i].x1,&s[i].y1,&s[i].x2,&s[i].y2);
	        x[nx++]=s[i].x1;
	        x[nx++]=s[i].x2;
	        y[ny++]=s[i].y1;
	        y[ny++]=s[i].y2;
	    }
	    sort(x,x+nx);
	    sort(y,y+ny);
	    nx=unique(x,x+nx)-x;
	    ny=unique(y,y+ny)-y;
	    for(int i=0;i<n;i++)
	    {
	    	int x1=find(x,s[i].x1,nx);
	    	int x2=find(x,s[i].x2,nx);
	    	int y1=find(y,s[i].y1,ny);
	    	int y2=find(y,s[i].y2,ny);
			 
	    	for(int i=x1;i<x2;i++)
	    	for(int j=y1;j<y2;j++)
	    	vis[i][j]=1;
		}
		for(int i=0;i<nx;i++)
		for(int j=0;j<ny;j++)
		if(vis[i][j])
		res+=(x[i+1]-x[i])*(y[j+1]-y[j]);
		printf("%.2f\n",res);
	}
