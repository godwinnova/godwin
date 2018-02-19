#include <stdio.h>

int main(void) 
{
	char s[50];
	int k,i;
	printf("enter a string:");
	scanf("%s",s);
	printf("enter a number:");
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		printf("\n%s",s);
	}
	return 0;
}
