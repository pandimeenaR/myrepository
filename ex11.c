#include <stdio.h>
int main()
{
	int j,i=0,q,a[100];
	scanf("%d",&q);
	while(q!=0)
	{
		a[i++]=q%2;
		q/=2;
	}
	for(j=i-1;j>=0;j--)
		printf("%d",a[j]);
   return 0;
}
