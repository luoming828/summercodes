/*����һ���Ǹ���������A��A ��һ��������������һ��������ż����

��������������Ա㵱A[i] Ϊ����ʱ��iҲ����������A[i]Ϊż��ʱ�� iҲ��ż����

����Է����κ���������������������Ϊ�𰸡�*/

int* sortArrayByParityII(int* A, int ASize, int* returnSize){
  *returnSize=0;
  int* res=(int*)malloc(sizeof(int)*ASize);
  int t=0;
  int s=1;
  for(int i=0;i<ASize;i++){
      if(A[i]%2==0){
          res[t]=A[i];
          t=t+2;
      }
      else{
          res[s]=A[i];
          s=s+2;
      }
  }
  *returnSize=ASize;
  return res;

