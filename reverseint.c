//to reverse the giver string
#include <stdio.h>

int main(void) {
	// your code goes here
{
	int n,digit,sum=0;
	printf("enter an integer");
	scanf("%d",&n);
	while(n!=0)
	{
		digit=n%10;
		sum=sum*10+digit;
		n=n/10;
	}
	printf("the reversed string is %d",sum);
	return 0;
	
}

	return 0;
}
