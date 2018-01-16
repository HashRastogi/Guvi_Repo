#include<stdio.h>

void main(){
    int n,a[100000], min;
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        if(i == 0){
            min = a[i];
        }
        if(min > a[i]){
            min = a[i];
        }
    }
    printf("%d", min);
}