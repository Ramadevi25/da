#include <stdio.h>

int main(void) {
	// your code goes here
	{
	int a,sum=1,i;
	printf("enter a number");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		sum=sum*i;
	}
	printf("%d",sum);
}

	return 0;
}
