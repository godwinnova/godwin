#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c,d,e,i;
printf("Enter a two numbers:");
scanf("%d%d",&a,&b);
for(i=a+1;i<b;i++)
{
c=i;
d=0;
while(c!=0)
{
e=c%10;
d+=e*e*e;
c/=10;
}
if(i==d)
{
printf("\t %d",i);
}
}
getch();
return 0;
}
