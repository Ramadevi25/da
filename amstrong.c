#include <stdio.h>

int main(void) {
	int a,r,summ=0,n;
	printf("enter a number\n");
	scanf("%d",&n);
	a=n;
	while(n!=0)                                    //check for amstrong or not
	{
		r=n%10;
		summ=summ+(r*r*r);
		n=n/10;
	}
	if(summ==a)                                    //print statement
		printf("%d is an amstrong number",a);
	else
		printf("%d is not an amstrong number",a);
	
	return 0;
}
