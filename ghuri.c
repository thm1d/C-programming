#include<stdio.h>
int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(n-i);j++)
            printf(" ");
        for(k=1;k<=i;k++)
            printf("* ");
        printf("\n");
    }
     for(i=1;i<=n-1;i++)
    {
        for(j=1;j<=i;j++)
        {
             printf(" ");
        }
        for(k=1;k<=n-i;k++)
            printf("* ");
        printf("\n");
    }
     for(i=1;i<=n/2;i++)
    {
        for(j=1;j<=(n-i);j++)
            printf(" ");
        for(k=1;k<=i;k++)
            printf("* ");
        printf("\n");
    }
    return 0;
}

