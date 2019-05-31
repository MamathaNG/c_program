#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
    int i,j,n;
    printf("enter the num:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    getch();
}
