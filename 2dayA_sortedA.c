#include<stdio.h>
#include<conio.h>
void main()
{
   int a[100],i,n,pos,x;
   printf("enter how many value in array\n");
   scanf("\n%d",&n);
   printf("Enter %d value in Ascending Order\n",n);
   for(i=0;i<n;i++)
	scanf("\n%d",&a[i]);
   printf("the value to be inserted:");
   scanf("\n%d",&x);
   for(i=0;i<n;i++)
     if(x<a[i])
     {
       pos =i;
       break;
     }
   for(i=n;i>=pos;i--)
      a[i]= a[i-1];
      a[pos]=x;
   printf("Existed List is :\n ");
   for(i=0;i<n;i++)
      printf("%5d",a[i]);
printf("\n\nAfter Insert the list is :\n ");
for(i=0;i<=n;i++)
printf("%5d",a[i]);
getch();
}
