#include<stdio.h>
#include<conio.h>
int main()
{
 int i, Size, a[20], b[20];
 printf("\nEnter the Array Size \n");
 scanf("%d", &Size);
 printf("\nEnter the Array Elements \n");
 for(i = 0; i < Size; i++)
  {
     scanf("%d", &a[i]);
   }
 for(i = 0; i < Size; i++)
  {
    b[i] = a[i];
  }
 printf("\n Elements of Second Array are: \n");
 for(i = 0; i < Size; i++)
  {
    printf("\n Value Inside Array b[%d] = %d", i, b[i]);
  }
 return 0;
}
