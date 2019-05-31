#include<stdio.h>
#include<conio.h>
int main()
{
int a=5,b=10,temp;
a=a^b;
b=a^b;
a=a^b;
printf("a=%d b=%d",a,b);
return 0;
}
