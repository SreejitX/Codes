#include <stdio.h>
int main(){
    int num,fact=1;
    printf("Enter ur no.: ");
    scanf("%d",&num);
    while(num!=1){
        fact=fact*num;
        num=num-1;
    }
    printf("Factorial = %d",fact);
    int a=1;
    while(a!=11){
        printf("8 * %d = %d",a,a*8);
        a++;
    }
    return 0;
}