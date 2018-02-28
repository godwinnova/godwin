#include <stdio.h>

int main(void) 
{
	char str[20];
	int k,i;
	printf("enter a string and a k value:");
	scanf("%s %d",str,&k);
	for(i=0;i<k;i++)
	{
		printf("\n%c",str[i]);
	}
	return 0;
}
