#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
    char s1[5]="hello";
    int length=0,i;
    length=strlen(s1);
    for(i=0;s1[i]!='\0';i++)
    {
        s1[i]=s1[i]-32;
    }
    for(i=0;s1[i]!='\0';i++)
    {
    printf("%c",s1[i]);
    }

    //puts(s1);
    getch();
}
