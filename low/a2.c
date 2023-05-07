#include <stdio.h>
#include <math.h>
#include <stdbool.h>

void f1(){
  for(int i=1; i<=3; ++i){
    for(int j=1; j<=5; ++j){
      bool a = j==2 && i==2, b = j==4 && i==2, c = i==3, d = j==3 && i==1;
      if(c || a || b || d){
        printf("A");
      }
      else printf(" ");
    }
    printf("\n");
  }
}

void main(){
  f1();
}
