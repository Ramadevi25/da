#include <stdio.h>

int main(void) {
 int n;
 
 printf("Enter the value");
 scanf("%d",&n);
 if(n==0)
 {
 	printf("\n it is zero");
 	
 }
 else if(n>0)
 {
 	printf("\n positive");
 }
 else
 {
 	printf("\n negative");
 }
	return 0;
}
