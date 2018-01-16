#include<stdio.h>

void main(){
    int n, a[1000];
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n; i++){
        printf("%d %d\n",a[i],i);
    }
    
}