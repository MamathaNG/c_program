#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
    char s1[5]="hello",s2[3]="hai";
    int length=0,i;
    length=strlen(s1);
    for(i=0;s1[i]!=0;i++)
    {
        s2[length]=s1[i];
        length++;
    }
    s2[length]='\0';
    printf("%s",s2);
    //return 0;
    getch();
}
