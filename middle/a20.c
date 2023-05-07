#include <stdio.h>

// 0 <=> 1000

void f(){
    int x;
    printf("summa ");
    scanf("%d", &x);
    int q = x % 1000;
    int xx = x / 1000;
    if(q>=500 && q<1000) printf("%d", xx * 1000 + 1000);
    else if(q>=100 && q<500) printf("%d", xx * 1000 - 1000);
}

void main(){
    f();
}
