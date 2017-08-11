#include <stdio.h>

int main()
{
	char s;
	scanf("%c",&s);
	if(s=='a' || s=='e' || s=='i' || s=='o' || s=='u' || s=='A' || s=='E' || s=='I' ||s=='E' || s=='U')
	printf("%c is a vowel",s);
	else
	printf("%c is a consonant",s);
	return 0;
}
