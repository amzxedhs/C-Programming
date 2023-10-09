#include<stdio.h>
int operations(int a , int b){
    int c=a+b;
    return c;
}
int main(){
    int a=0,b=0;
    printf("enter a \n");
    scanf("%d",&a);
    printf("enter b\n");
    scanf("%d",&b);
    int val=operations(a,b);
    printf("the sum of these two numbers is:%d",val);


}