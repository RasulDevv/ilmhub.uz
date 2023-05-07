#include <stdio.h>

void f1(int n){
   int i = 1;
   while(i<10){
      int w = n * i;
      printf("%d*%d=%d\n", n, i, w);
      ++i;
   }
}

void fibo(int x){
   int n1 = 0, n2 = 1, n3 = n1 + n2;
   for(int i=1; i<=x; ++i){
      printf("%d  ", n1);
      n1 = n2;
      n2 = n3;
      n3 = n1 + n2;
   }
}

void main(){
   fibo(10);
}
