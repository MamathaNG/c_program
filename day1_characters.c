#include<stdio.h>
#include<conio.h>
int main()
{
char ch;
printf("enter a character:");
scanf("%c",&ch);
if(ch>=65 && ch<=123)
 {
if(ch==65||ch==69||ch==73||ch==79||ch==85||ch==97||ch==101||ch==105||ch==111||ch==117)
{
    printf("vowel\n");
}
if(ch>=65&&ch<=90)
{
    printf("upper case\n");}
else if(ch>=97&&ch<=122)
{
    printf("Lower case\n");
}
else{
    printf("Consonant\n");
}}

else if(ch>=48&&ch<=57)
{
    printf("its a number\n");
}
else{
    printf("its neither alphabet nor number\n");
}
return 0;
}
