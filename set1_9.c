#include<stdio.h>

void main(){
    int a[100], n, k, sum = 0;
    scanf("%d%d", &n, &k);
    
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        if(k - 1 >= i){
            sum += a[i];
        }
    }
    printf("%d", sum);
}