#include<stdio.h>
#include<conio.h>
void main()
{
   int a[100],i,n,pos,x;
   printf("enter the values in array\n");
   scanf("%d",&n);
   printf("Enter %d value \n",n);
   for(i=0;i<n;i++)
   scanf("\n%d",&a[i]);
   printf("the value to be inserted:");
   scanf("\n%d",&x);
   printf("the Position to be inserted");
   scanf("\n%d",&pos);
   for(i=n;i>=pos;i--)
      a[i]= a[i-1];
      a[pos]=x;
   printf("Existed List is :\n ");
   for(i=0;i<n;i++)
      printf("%5d",a[i]);
   printf("\n\nInserted list is :\n ");
   for(i=0;i<=n;i++)
      printf("%5d",a[i]);
 getch();
}
