#include <stdio.h>
int main(void) 
{
	int i,k;
	scanf("%d",&k);
	if(k>0)
	{
		printf("positive");
	}
	else if(k<0)
	{
		printf("negative");
	}
	else
	{
		printf("zero");
	}
	return 0;
}
