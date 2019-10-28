#include<stdio.h>
#include<stdlib.h>

int main()
{
  int left , right , mid , count;
  int n , x , k;
  int D[16] = {4,19,21,53,63,79,89,103,113,131,148,153,154,176,196,200}; ] //乱数ジェネレーターで作成した配列


//初期化
  left = 0;
  right = 0;
  mid = 0;
  count = 0;
  n = 0;
  x = 0;
  k = 0;


  n = 16;
  right = n-1;
  mid = (left + right) / 2;

  printf("探索する値を入力してください。\n");
  scanf("%d",&x);

  while(left < right)
    {
      printf("count = %3d \n", ++count);

      if(D[mid] == x)
	{
	  printf("%d\n",D[mid]);
	  exit(0);
	}
      else if(D[mid] < x)
	{
	  left = mid +1;
	  mid = (left + right) / 2;
	}
      else 
	{
	  right = mid - 1;
	  mid = (left + right) / 2;
	}
    }


  if(D[mid] == x)
    {
      printf("%d\n",D[mid]);
    }
  else
    {
      printf("xは存在しません\n");
    }

  return 0;
}
