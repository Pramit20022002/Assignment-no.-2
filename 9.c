#include<stdio.h>
int main ()
{
    int a,f,d,c;
    a = sizeof(int); //a is int variable
     printf("Size of a is:%d",a);
    
    f = sizeof(float);    //f is a float variable
    printf("\nSize of f is:%d",f);

    d = sizeof(double); //d is double variable
    printf("\nsize of d is:%d",d);

    c = sizeof(char); //c is a char variable
    printf("\nSize of c is:%d",c);
    return 0;


}