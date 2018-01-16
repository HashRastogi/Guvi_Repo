#include<stdio.h>


void main(){
    int n,a[1000],j,k;    
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    for(int i = 1; i < n; i++){
        j = i - 1;
        k = a[i];
        while(j >=0 && k < a[j]){
            a[j + 1] = a[j];
            j = j - 1;
            
        }
        a[j + 1] = k;
        
    }
    printf("%d",a[n/2]);
    
}