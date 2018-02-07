#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,rev=0;
printf("enter a number");
scanf("%d",&a);
a=n;
while(a!=0)
{
rev=(rev*10)+(a%10);
a/=10;
}
if(rev==b)
{
printf("palindrome");
}
else
{
printf("not palindrome");
}
}
