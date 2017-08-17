#include <stdio.h>

int main(void) {
	// your code goes here
	int a,k=1,i;
	printf("enter the number\n");       
    scanf("%d",&a);
    for(i=2;i<a/2;i++)                        
    {
    	if(a%i==0)
    	k=0;
    	break;
    }
    if(k==1)
    	printf("%d is a prime number",a);
    else
    	printf("%d is not a prime number",a);
    return 0;
}
