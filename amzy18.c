#include<stdio.h>
int amzy(int *a , int *b){
int area=0.5*(*a)*(*b);
return area;
}
int main()
{
    int a,b;
    printf("enter value of base");
    scanf("%d",&a);
    printf("enter value of height");
    scanf("%d",&b);
    printf("the area of the triangle is:%d",amzy(&a,&b));
}
