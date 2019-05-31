#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,j,count=0;
    printf("enter the number:");
    scanf("%ld",&n);
    for(j=2;j<=n;j++)
    {

        for(i=2;i<=j;i++)
        {
            if(j%i==0)
            count++;
        }
            if(count==1)
            printf("%d",j);
            count=0;
    }
    getch();
}

