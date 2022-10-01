#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter Number:");

    scanf("%d",&a);
    b=a%10;
    c=a/10;
    d=b*100;
    e = d  + c ;
    printf("%d",e);
    return 0;
}