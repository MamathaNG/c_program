#include<stdio.h>
#include<conio.h>

struct student
{
  char name[20],address[30];
  int marks,roll,age;
};

void main()
{
  struct student s[15];
  int i;
  for(i=0;i<15;i++)
  {
    printf("\nEnter records for student[%d]\n",i+1);
    printf("Enter name: ");
    gets(s[i].name);
    printf("Enter address: ");
    gets(s[i].address);
    printf("Enter marks, roll number and age: ");
    scanf("%d%d%d",&s[i].marks,&s[i].roll,&s[i].age);
  }
  printf("Records of the 15 students are here");
  for(i=0;i<15;i++)
  {
    printf("\nStudent %d",i+1);
    printf("\nName: %s",s[i].name);
    printf("\nAddress: %s",s[i].address);
    printf("\nmarks: %d",s[i].marks);
    printf("\nRoll No.: %d",s[i].roll);
    printf("\nmarks: %d",s[i].age);
    printf("\n");
  }
  getch();
}
