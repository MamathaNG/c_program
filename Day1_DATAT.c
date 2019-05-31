#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
int a;
short b;
long c;
unsigned int d;
unsigned short e;
unsigned long f;
char g;
unsigned char h;
float i;
double j;
long double k;
//long long int  l=1234566;
printf("int shrt long uint ushrt ulong\n");
scanf("%d %i %ld %u %hu %lu",&a,&b,&c,&d,&e,&f);
printf("entered values are:%d\n %i\n %ld\n %u\n %hu\n %lu\n",a,b,c,d,e,f);
fflush(stdin);
printf("\nfloat double longdouble\n");
scanf("%f %lf %Lf",&i,&j,&k);
printf("%f\n %lf\n %Lf\n",i,j,k);
fflush(stdin);
//scanf(" %Lf",&k);
//fflush(stdin);
printf("\nenter 2 chars:\n");
scanf("%c %c",&g,&h);

printf(" %c\t %c\n",g,h);
return 0;
}

