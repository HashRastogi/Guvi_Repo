#include<stdio.h>
int n,a[1000],j,k;
void print(){
    printf("\n");
    for(int i = 0; i < n; i++){
        printf("%d ",a[i]);
    }
}
void main(){
    
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
    
    print();
}