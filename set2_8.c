#include<stdio.h>
#include<math.h>

void main(){
    int num1, num2, sum,t;
    scanf("%d%d", &num1, &num2);
    for(int i = num1 + 1; i <= num2; i++){
        t = i;
        sum = 0;
        for(;t>0;t/=10){
        sum+=(int)pow((t%10),3);
        }
        if(sum == i)
        printf("%d ",i);
    }
    
    
    
}