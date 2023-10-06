#include<stdio.h>
int main(){
    int a,b=0;
    printf("enter any number");
    scanf("%d",&a);
    while(a!=0){
        a=a/10;
        b++;

    }
    printf("the number of digits in this number is %d",b);

}
