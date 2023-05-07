#include <stdio.h>

void f1(int x){
  char* arr1[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
  for(int i=0; i<7; ++i){
     printf("%s  %d\n", arr1[i], x);
     ++x;
 }
}

void main(){
   int x;
   printf("x = ");
   scanf("%d", &x);
   printf("\n");
   f1(x);
}
