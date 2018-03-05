#include <stdio.h>
#include<string.h>
int main(void) 
{
	char str[50],temp[10];
	int i,j,l,k;
	printf("enter a value of string:");
	scanf("%s",str);
	n=strlen(str);
	while(i<j)
	{
		for(i=0;i<l;i++)
		{
			for(j=l;j>=1;j--)
			{
				temp[k]=str[i];
				str[i]=str[j];
				str[j]=str[i];
			}
		}
	}
	printf("\nyes");
	return 0;
}
