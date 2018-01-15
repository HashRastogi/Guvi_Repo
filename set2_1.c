#include<stdio.h>

void main(){
    int num, power, product = 1;
    scanf("%d%d", &num, &power);
    
    for(int i = power; i >
    0; i--){
        product *= num;
    }
    printf("%d", product);
    
    
}
