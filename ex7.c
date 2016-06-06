#include <stdio.h>

int main(void) {
	int c1=0,c2=1,c3,dis=0,num;
	scanf("%d",&num);
	printf("%d\t%d\t",c1,c2);
	while(dis<=num)
	{
		dis=c1+c2;
		c1=c2;
		c2=dis;
		printf("%d\t",dis);
	}
	return 0;
}
