#include<stdio.h>
#include<math.h>

void main(){
    int num, sum = 0;
    scanf("%d", &num);
    int t = num;
    for(;num>0;num/=10){
        sum+=(int)pow((num%10),3);
    }
    if(sum==t)
    printf("Armstrong");
    else
    printf("Not Armstrong");
}