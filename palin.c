#include <stdio.h>
int main() 
{
int a,n,digit,sum=0;
printf("enter a no\n");
scanf("%d",&n);
	
	a=n;
	while(n!=0)
	{
		digit=n%10;
		sum=(sum*10)+digit;
		n=n/10;
	}
	if( a == sum)
		printf("%d it is paliandrome",a);
	else
		printf("%d it not is paliandrome",a);
	return 0;
}
