#include <stdio.h>

char f1(char x){
   if(x>=65 && x<=90){
      for(int i=65; i<=90; ++i){
         if(x==i){
            for(int j=97; j<=122; ++j){
               if(j-i==32) return j;
            }
         }
      }
   }
   else if(x>=97 && x<=122){
      for(int i=97; i<=122; ++i){
         if(x==i){
            for(int j=65; j<=90; ++j){
               if(i-j==32) return j;
            }
         }
      }
   }
   else return '0';
}

void main(){
   printf("%c", f1('2'));
}
