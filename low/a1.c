#include <stdio.h>

void f1(){
  for(int i=0; i<4; ++i){
    for(int j=0; j<6; ++j){
      if(i==0 || i==3 || j==0 || j==5){
        printf("2");
      }
      else printf(" ");
    }
    printf("\n");
  }
}

void f2(){
  for(int i=0; i<4; ++i){
    if(i==0 || i==3) printf("222222");
    else{
      for(int j=0; j<6; ++j){
        if(j==0 || j==5) printf("2");
        else printf(" ");
      }
    }
    printf("\n");
  }
}

void main(){
  f2();
}
