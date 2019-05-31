#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
    char s1[12],s2[10];
    int i=0,len=0;
    printf("enter the value of string:");
    scanf("%s",s1);
    while(s1[i]!='\0')
    {
        len++;
        i++;
    }

        printf("the length is %d:",len);

    getch();
}
