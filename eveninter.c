#include <stdio.h>

int main(void) {
	// your code goes here
	int a,b,i;
	printf("enter the interval range\n");
	scanf("%d%d",&a,&b);
	printf("the even numberrs between %d and %d are\n",a,b);
	for (i=a;i<=b;i++)
	{
		if(i%2==0)
		printf("%d\n",i);
	}
	
	return 0;
}
