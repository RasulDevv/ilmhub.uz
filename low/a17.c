#include <stdio.h>
#include <ctype.h>
#include <string.h>

// 12345 => 1!2!3!4!5

int digits(long long x){
   int s=0;
   while(x!=0){
      x = x / 10;
      ++s;
   }
   return s;
}

void f1(int x){
   int dg = digits(x), n = 1, i = 1, j = 1, y = x, q;
   while(i<=dg){
      n = n * 10;
      ++i;
   }
   while(j<=dg){
      q = y / n;
      n = n / 10;
      y = y / 10;
      ++j;
      printf("%d!", q);
   }
}

void main(){
   char name[]="rasul";
   f1(12345);
}
