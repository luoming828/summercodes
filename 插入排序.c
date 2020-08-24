/*插入排序*/
#include<stdio.h>
int number[100];     //在外面定义数组 
void insertionsort(int *number,int n)    
{
    int i=0,j=0,temp=0;  
    for(i=1;i<n;i++)  //循环遍历 
    {
        temp=number[i];  //将temp每一次赋值为number[i] 
        j=i-1;  
        while(j>=0&&temp<number[j])   //这里改顺序 (temp后的)"<"为小到大，">"为大到小 ！！！
        {
            number[j+1]=number[j];    //将大的元素往前放 
            j--; 
        }
        number[j+1]=temp;   //与"number[j+1]=number[j];"一起意为 
    }              //如果插入的数比之前的大,将number[j]与number[j+1]互换 
}
int main() 
{
    int i=0,j,n;
    printf("输入数字个数：\n");    
    scanf("%d",&n);      
    printf("输入%d个数:\n",n);
    for(i=0;i<n;i++)       
        scanf("%d",&number[i]) ;
    insertionsort(number,n);   
    for(i=0;i<n;i++)    
        printf("%d ",number[i]); 
	printf("\n");
    return 0;
}