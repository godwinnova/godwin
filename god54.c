#include <stdio.h>
 
int main(void) 
{
	int a,b,d,mod;
	scanf("%d %d %d",&a,&b,&d);
	mod=((a*b)%d);
	printf("\n%d",mod);
	return 0;
}
