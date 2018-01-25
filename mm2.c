#include<stdio.h>
#include<conio.h>
void main()
{
int a,i,c=0;
clrscr();
printf("enter the value a :");
scanf("%d",&a);
for(i=1;i<=a;++i)
c+=i;   
printf("c= %d",c);
getch();
}
