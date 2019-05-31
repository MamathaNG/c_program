#include<stdio.h>
#include<conio.h>
int main()
{
long int n,t,s=0,d;
printf("enter the number");
scanf("%ld",&n);
t=n;
while(n>0)
{
d=n%10;
s=s+d;
n/=10;
}
printf("given number=%ld",t);
printf("sum of the digits %ld=%ld",t,s);
}
