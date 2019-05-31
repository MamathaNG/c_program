#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
long long num;
int count=0;
printf("enter any number");
scanf("lld",&num);
while(num!=0)
{
count++;
num/=10;
}
printf("total digit:%d",count);
return 0;
}
