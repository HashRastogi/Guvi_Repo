#include <stdio.h>

int main()
{
    int c = 0;
    char str[1000];
    fgets(str,1000,stdin);
    
    for(int i = 0; str[i]!='\0'; i++){
        if(str[i] == ' ' || str[i] == '\n')
        continue;
        c++;
        
    }
    
    printf("%d",c);
    return 0;
}

