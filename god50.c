#include <stdio.h>

int main(void) 
{
	int l,b,k;
	scanf("%d %d %d",&l,&b,&k);
	int volume,tsa;
	volume=l*b*k;
	tsa=2*((l*b)+(b*k)+(k*l));
	printf("\nVOLUME=%d",volume);
	printf("\nTSA=%d",tsa);
	return 0;
}
