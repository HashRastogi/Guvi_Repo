#include<stdio.h>

void main(){
    int n,a,d,sum = 0;
    scanf("%d%d%d", &n, &a, &d);
    for(int i = 0; i < n; i++,a+=d){
        sum+=a;
    }
    printf("%d",sum);
}