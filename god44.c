#include <stdio.h>

int main(void) 
{
	int i,m,k,array[20];
	scanf("%d %d",&m,&k);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&array[i]);
	}
	for(i=1;i<=m;i++)
	{
		while(i==k)
		{
			printf("\n%d",array[i]);
			break;
		}
	}
	return 0;
}
