#include<stdio.h>
int main()
{
    int a[3][3];
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("enter the value of 2d array:");
            scanf("%d",&a[i][j]);
        }
    }
    printf("the 2d array is:\n");
    for(i=0;i<3;i++)
    {
for(j=0;j<3;j++)
{
    printf("%d",a[i][j]);
}
printf("\n");
    }
    return 0;
}