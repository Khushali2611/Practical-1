#include<stdio.h>
#include<conio.h>
int main()
{
int physics,chemistry,maths,computer,english,total;
float per;
char name[30];
clrscr();
printf("Enter your name:");
gets(name);
printf("Enter a marks physics:");
scanf("%d",&physics);
printf("Enter a marks chemistry:");
scanf("%d",&chemistry);
printf("Enter a marks maths:");
scanf("%d",&maths);
printf("Enter a marks english:");
scanf("%d",&english);
printf("Enter a marks computer:");
scanf("%d",&computer);
total=physics+chemistry+maths+computer+english;
printf("total=%d \n",total);
per=total/5.0;
printf("your pestange:%f \n",per);
if(per<=100 && per>80)
{
printf("Grade A");
}
else if(per<80 && per>=70)
{
printf("Grade B");
}
else if(per<70 && per>=60)
{
printf("Grade C");
}
else if(per<60 && per>=50)
{
printf("Grade D");
}
else if(per<50 && per>=35)
{
printf("Grade E");
}
else
{
printf("Grade F");
}
getch();
return 0;
}