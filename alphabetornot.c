#include <stdio.h>

int main(void) {
	char s;
	printf("enter a char\n");
	scanf("%c",&s);
	if((s>='a'&&s<='z')||(s>='A'&&s<='Z'))
	printf("%s is a alphabet",s);
	else
	printf("% is not a alphabet",s);
	return 0;
}
