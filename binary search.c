#include<stdio.h>
int main()
{
    int array[100],n,i,search,first,last,middle;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Enter value to find : \n");
    scanf("%d",&search);
    first = 0;
    last = n - 1;
    middle = (first+last)/2;

    while (first <= last)
    {
        if (array[middle] < search)
            first = middle + 1;
        else if (array[middle] == search)
        {
            printf("%d found at location %d\n", search, middle+1);
            break;
        }
        else
            last = middle - 1;
        middle = (first + last)/2;
    }
   if (first > last)
        printf("%d is not present in the list\n", search);
   return 0;
}
