#include<stdio.h>
#include<ctype.h>
int main(){
    char ch;
    printf("enter the character:");
    scanf("%c",&ch);
    if(isdigit(ch)==1){
        printf(" it is a digit");
    }else if(isalpha(ch)==1){
        printf("it is a alphabet");
    } else{
        printf("invalid input");
    }

}
