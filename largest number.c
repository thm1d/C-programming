#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a==b==c)
        printf("there is no largest number");
    else if(a>=b && a>=c)
        printf("%d is the largest number",a);
    else if(b>=a && b>=c)
        printf("%d is the largest number",b);
    else
        printf("%d is the largest number",c);
    return 0;
}

