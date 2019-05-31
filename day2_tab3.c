#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j=3,k=0;
    for(i=1;i<=5;i++)
    {
        k=i*j;
        printf("\n%d * 3 = %d",i,k);
    }
    getch();
}
