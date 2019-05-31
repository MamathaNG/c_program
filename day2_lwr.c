#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char s1[5]="HAI";
    int length=0,i;
    length=strlen(s1);
    for(i=0;s1[i]!='\0';i++)
    {
        s1[i]=s1[i]+32;
    }
    printf("%s",s1);
    getch();
}
