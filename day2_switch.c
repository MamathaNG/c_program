#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,dif,os,es,s,n,sum=0,num,uni;
    printf("enter the number:");
    scanf("%d",&n);
    printf("enter the choice:");
    scanf("%d",&s);
    switch(s)
    {
case 2:
    uni=(n%10);
    if(uni/2)
    {
        printf("\nuni divisible by 2");
    }
    else
    {
        printf("\nuni is not divisible by 2");
    }
    break;
case 3:
        while(n>0)
        {
            num=n%10;
            sum+=num;
            n=n/10;
        }
        if(sum%3==0)
        {
            printf("\ndiv by 3");
        }
        else
        {
            printf("\nnot div by 3");
        }
        break;
case 4:
        uni=num%100;
        if(uni%4==0)
        {
            printf("\nuni div by 4");
        }
        else
        {
            printf("\nuni not div by 4");
        }
        break;
case 5:
    uni=num%5||num==0;
    printf("the number id %d",uni);
    if(uni%5==0)
    {
        printf("\nuni is div by 5");
    }
    else
    {
        printf("\nuni is not div by 5");
    }
    break;
case 6:
        uni=(n%10);
        while(n>0)
        {
            num=n%10;
            sum+=num;
            n=n/10;
        }
        printf("\ntotal number is %d",sum);
        if(sum%3==0||uni/2)
        {
            printf("\ndiv by 6");
        }
        else
        {
            printf("\nnot div by 6");
        }
        break;
case 7:
        if(uni%7==0)
        {
            printf("\ndiv by 7");
        }
        else
        {
            printf("\nnot div by 7");
        }
        break;
case 8:
        if(uni%8==0||uni%4==0)
        {
            printf("\ndiv by 8");
        }
        else
        {
          printf("\nnot div by 8");
        }
        break;
case 10:
        uni=n/100;
        if(uni==0)
        {
            printf("\ndiv by 10");
        }
        else
        {
          printf("\nnot div by 10");
        }
        break;
case 11:
         a=n;
         b=n/10;
         while(a>0)
         {
             os=os+(a%10);
             a=a/100;
         }
         while(b>0)
         {
             es=es+(b%10);
             b=b/100;
         }
         dif=os-es;
         if(dif%11==0||dif==0)
         {
           printf("\ndivision by 11");
         }
         else
         {
           printf("\nnot divisible by 11");
         }
         break;
default :
         printf("\nenter num is out of range");
         break;
}
}
