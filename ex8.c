#include <stdio.h>

int main(void) {
	int rem,res=0,num,original;
	scanf("%d",&num);
	original=num;
	while(num!=0)
	{
		rem=num%10;
		res=res+rem*rem*rem;
		num=num/10;
	}
	if(res==original)
		printf("armstrong");
	else
		printf("not armstrong");
	return 0;
}
