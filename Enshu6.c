#include<stdio.h>
#include<stdlib.h>

  int hash(int x) 
  {
      int y;

      y = x / 7;

      return y;
  }

  void search(int x, int *h)
  {
      int k;
      k=0;
      k = hash(x);
      while(h[k] != 0)
      {
          if(h[k] == x)
          {
              printf("H[%d] = %d \n",k , h[k]);
              exit(0);
          }
          k = (k+1) % 16;
      }
      printf("入力した値は存在しません。\n");
  }


  int main()
  {
      int i , m , n , x ,k;
      int D[11] = {81, 20, 45, 62, 89, 66, 42, 70, 44, 51, 31};
      int H[16]; //H[0]~H[15]の配列

//初期化
      i = 0;
      m = 0;
      n = 0;
      x = 0;
      k = 0;
      for(i = 0 ; i < 15 ; i++)
      {
          H[i] = 0;
      }

      n = 11; //データの個数が11コのため
      m = 16; //Hの配列の大きさが16コのため

      for(i = 0 ; i < n ; i++)
      {
          k = hash(D[i]);
          while(H[k] != 0)
          {
            k = (k+1) % m;
          }
          H[k] = D[i];
          printf("H[%d] = %d \n",k , H[k]);
      }
      

      printf("探索したい値を入力してください。\n");
      scanf("%d" , &x);

      search(x, H); //xの値とH配列のアドレスを引数にしている

      return 0;

  }