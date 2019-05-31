#include<stdio.h>
#include<conio.h>
void main()
{
    char s1[10],s2[12];
    int i,temp=0;
    printf("enter the value of string:");
    scanf("\n%s",&s1);
    printf("enter the value of string:");
    scanf("\n%s",&s2);
    for(i=0;s1[i]!=0;i++)
    {
        if(s1[i]==s2[i])
        {
            temp=1;
        }
        else
        {
            temp=0;
        }
        if(temp==1)
        {
            printf("\nboth strings are same");
        }
        else
        {
            printf("\nboth are not same");
        }
        getch();
    }
}
