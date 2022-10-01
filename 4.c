#include<stdio.h>
int main()
{
	int a,b;
	
	printf("before swap:");
	scanf("%d%d",&a,&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("after swap: a=%d,b=%d",a,b);
return 0;	
}
