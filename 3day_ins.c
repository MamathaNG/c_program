#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
   char a1[100],a2[100],a3[100];
   int i,l,pos,temp;
   printf("enter  string1:\n");
   scanf("%s",a1);
   printf("Enter string2:\n");
   scanf("%s",a2);
   printf("the Position to be inserted");
   scanf("\n%d",&pos);
   for(i=0;i<pos;i++)
   {
       //a1[l]=a1[i]+pos;
       a3[i]=a1[i];
   }
   //a3[i]='\0';
   temp=pos;
   for(i=0;a2[i]!='\0';i++)
   {
       a3[pos]=a2[i];
       pos++;
   }
   //a3[pos]='\0';
   for(i=temp;a1[i]!='\0';i++)
   {
       a3[pos]=a1[i];
       pos++;
   }
   a3[pos]='\0';
   printf("\nentire string is: %s",a3);
   //getch();
}
