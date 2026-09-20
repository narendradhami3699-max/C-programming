# include <stdio.h>
int main()
{
    int x;
    printf("enter the age");
    scanf("%d" , &x);
    if (x>=18)
    printf("you are eligible for vote");
    else
    printf("you are not eligible");
    return 0;
}