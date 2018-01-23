
#include <stdio.h>

int main()
{
    int c = 1;
    char str[1000];
    fgets(str,1000,stdin);
    
    for(int i = 0; str[i]!='\0'; i++){
        if(str[i] == ' ' )
        c++;
        
    }
    
    printf("%d",c);
    return 0;
}



