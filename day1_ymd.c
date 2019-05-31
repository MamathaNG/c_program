#include<stdio.h>
#include<conio.h>
void main()
{
    long days;
    int weeks,months,years;
    printf("enter no of days\n");
    scanf("%lu",&days);
    printf("years=%lu \n",days/365);
    years=days/365;
    printf("months=%d \n",days/30);
    months=days/30;
    printf("weeks=%d \n",days/7);
    weeks=days/7;
    printf("days=%d\n",days/1);
    getch();
}
