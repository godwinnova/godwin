#include <stdio.h>
#include<string.h>
int main(void) 
{
	char str1[50],str2[50];
	int i,j;
	printf("enter a string1:");
	scanf("%s",str1);
	printf("\n enter a string2:");
	scanf("%s",str2);
	for(i=0;str1[i]!='\0';i++)
	{
		
	}
	for(j=0;str2[j]!='\0';j++)
	{
		str1[i]=str2[j];
		i++;
	}
	str1[i]='\0';
	printf("\n%s",str1);
	
	return 0;
}
