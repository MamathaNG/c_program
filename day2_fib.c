#include<stdio.h>
#include<conio.h>
void main()
{
    int n,a=0,b=1,s,i;
    printf("enter the fibbonaci series");
    scanf("%d",&n);
    printf("%d\t%d\t",a,b);
    for(i=0;i<n;i++)
    {
        s=a+b;
        a=b;
        b=s;
    printf("%d\t",s);
    }

    getch();
}
