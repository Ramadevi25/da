#include <stdio.h>

int main(void) {
	int a,b,i;
	printf("enter the range\n");  //a and b are the range
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++)
	{
		if(i%2!=0)             //to check the condition whelter it is odd
		printf("%d",i);
		printf("\n");
		
	}
	return 0;
}
