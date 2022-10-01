#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter number-");
    scanf("%d",&a);
    printf("Enter digit-");
    scanf("%d",&b);
        a=a*10+b;
    printf("%d",a);
    return 0;
}