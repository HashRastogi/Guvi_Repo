#include<stdio.h>
#define SIZE 3

void main(){
    int a[SIZE],max;
    for(int i = 0;i<SIZE; i++){
        scanf("%d",&a[i]);
        
    }
     max=a[0];
     for(int i = 0; i < SIZE; i++){
         if(max<a[i]){
             max=a[i];
         }
     }
     printf("%d",max);
}