#include <stdio.h>

int main(void) {
	int n,a,summ=0;
	scanf("%d",&n);
	for(a=0;a<=n;a++)
	{
		summ=summ+a;
	}
	printf("sum is %d",summ);
	return 0;
}
