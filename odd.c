#include <stdio.h>
int main(){
    int num,*p;
    printf("Enter ur no.");
    scanf("%d",&num);
    p=&num;
    if ((*p)%2==0)
    printf("even \n");
    else
    printf("odd \n");
    int n, isP = 1;
    printf("enter a number: ");
    scanf("%d", &n);
    p=&n;
    if (n < 2) isP = 0;   // 0, 1, negatives aren't prime

    for (int i = 2; i * i <= *p; i++) {
        if (*p % i == 0) {
            isP = 0;
            break;
        }
    }

    if (isP) printf("%d is prime\n", n);
    else         printf("%d is not prime\n", n);

    int a, b,x,y;
    printf("enter two numbers: ");
    scanf("%d %d", &a, &b);
    x=&a;
    y=&b
    if (*x > *y)       printf("%d is larger\n", a);
    else if (*y > *x)  printf("%d is larger\n", b);
    else             printf("both are equal\n");
    return 0;
}