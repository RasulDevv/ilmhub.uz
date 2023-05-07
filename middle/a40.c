#include <stdio.h>
#include <stdbool.h>

bool y(long long x){
    bool boll = true;
    int k = 1, p = 1;
    while(k!=0){
        p = p * k;
        ++k;
        if(x==p){
            k = 0;
            break;
        }
        else if(x<p){
            k = -1;
            break;
        }
    }
    if(k==0) return true;
    else if(k==-1) return false;
}

void main(){
    printf("%d", y(479001600));
}
