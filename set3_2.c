#include<stdio.h>

void main(){
    int n,a[100000], max;
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        if(i == 0){
            max = a[i];
        }
        if(max < a[i]){
            max = a[i];
        }
    }
    printf("%d", max);
}