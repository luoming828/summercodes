/*给定一个非负整数数组A，A 中一半整数是奇数，一半整数是偶数。

对数组进行排序，以便当A[i] 为奇数时，i也是奇数；当A[i]为偶数时， i也是偶数。

你可以返回任何满足上述条件的数组作为答案。*/

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

