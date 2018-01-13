#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

void main(){
    char c;
    scanf("%c", &c);
    c = toupper(c);
    if(!isalpha(c)){
        printf("Invalid input");
        exit(0);
    }
    if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
        printf("Vowel");
    }
    else{
        printf("Consonant");
    }
}