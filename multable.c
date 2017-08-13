#include <stdio.h>

int main(void) {
	// your code goes here
	int n,x,i;
	printf("enter the total no element and the range");
	scanf("%d%d",&n,&x);
	printf("\n");
	
	for(i=1;i<=x;i++)
	{
		printf("%d * %d = %d",n,i,n*i);
		printf("\n");
	}
		return 0;
}
