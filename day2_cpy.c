#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char s1[5]="hello",s2[5];
    int i,length=0;
    length=strlen(s1);
    for(i=0;s1[i]!='\0';i++)
    {
        s2[i]=s1[i];
    }
    s2[i]='\0';
    printf("%s",s1);
    puts(s2);
    getch();
}
