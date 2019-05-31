#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
    int i,j,n;
    printf("enter the num:");
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        for(j=i;j>0;j--)
        {
            printf("*");
        }
        printf("\n");
    }
    getch();
}
