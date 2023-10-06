#include <stdio.h>

int main() {
    int a, b = 1;
    printf("enter a\n");
    scanf("%d", &a);
    while (a > 0) {
        b = b * a;
        a--;
    }
    printf("the factorial of the number is:%d", b);
}
