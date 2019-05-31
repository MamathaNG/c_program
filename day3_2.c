#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
    int i,j,n,sp=8;
    printf("enter the num:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<sp;j++)
        {
            printf(" ");
        }
        sp=sp-2;
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    getch();
}
