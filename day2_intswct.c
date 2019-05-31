#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char s1[10];
    char s2[10];
    int s,l;
    printf("enter the string 1:");
    scanf("\n%s",&s1);
    printf("enter the string 2:");
    scanf("\n%s",&s2);
    printf("enter the choice");
    scanf("\n%d",&s);
switch(s)
{
case 1:
    strcpy(s1,s2);
    printf("\n%s",s1);
    printf("\n%s",s2);
    break;
case 2:
    strlwr(s1);
    printf("\n%s,s1");
    strlwr(s2);
    printf("\n%s,s2");
    break;
case 3:
    strupr(s1);
    printf("\n%s,s1");
    strupr(s2);
    printf("\n%s,s2");
    break;
case 4:
    l=strlen(s1);
    printf("length of %s is %d",s1,l);
    break;
case 5:
    l=strcmp(s1,s2);
    if(l==0)
    {
        printf("\nequal");
    }
    else
    {
        printf("\nnot equal");
    }
    break;
case 6:
    strcat(s1,s2);
    printf("\n%s",s1);
    printf("\n%s",s2);
    break;
   }
   getch();
}
