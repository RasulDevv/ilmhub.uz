#include <stdio.h>

void g(){
    int n, s=0, x;
    printf("nechta son: ");
    scanf("%d", &n);
    for(int i=1; i<=n; ++i){
        printf("%d-son: ", i);
        scanf(" %d", &x);
        s = s + x*x*x;
    }
    printf("%d", s);
}

void main(){
    g();
}
