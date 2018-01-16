#include<stdio.h>
#include<math.h>
void main(){
    int h1,m1,h2,m2,hours,minutes;
    scanf("%d%d%d%d",&h1,&m1,&h2,&m2);
    
    if(m1<m2){
        h1--;
        minutes = 60-abs(m1-m2);
    }
    else
    minutes=m1-m2;
    hours=h1-h2;
    printf("%d %d", hours,minutes);
    
}