#include <stdio.h>

int main(void) {
	int base,exp,r=1;
	scanf("%d%d",&base,&exp);
	while(exp!=0)
	{
		r=r*base;
		--exp;
	}
	printf("%d",r);
	return 0;
}
