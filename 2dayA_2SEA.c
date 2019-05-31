#include<stdio.h>
#include<conio.h>
void main()
{
    int a[50];
    int n,i,small,small2;
    printf("\n Enter number of elements: ");
    scanf("%d",&n);
    printf("\n Enter %d elements: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    small=small2=a[0];
    for(i=1;i<n;i++)
    {
        if(small>a[i])
        {
            small2=small;
            small=a[i];
        }
        else if(small2>a[i] && a[i]!=small)
        {
            small2=a[i];
        }
    }
     printf("\n The Second Smallest Element in the given Array: %d", small2);
    getch();
}
