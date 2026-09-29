#include<stdio.h>
int main ()
{
    int n, x, sum=0;
    printf("enter any number");
    scanf("%d", &n);
    for (x=1; x<=n; x++)
    {
        sum=sum+x;
    }
    printf("the sum is %d", sum);
    return 0;
}