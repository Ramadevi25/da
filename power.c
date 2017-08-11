#include <stdio.h>

int main(void) {
	int i,base,power=1,exp;
	printf("enter the base no and the exponentr\n");
	scanf("%d%d",&base,&exp);
	while(exp!=0){
		power=power*base;
		exp--;
	}
	printf("%d is the power of %d",power,base);
	
return 0;
}
