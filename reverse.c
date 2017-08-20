
#include<stdio.h>
#include<string.h>

void reverse(char [],int ,int);
int main(void)
{
	char s[20];
	int len;
	printf("enter a string\n");
	scanf("%s",s);
	len=strlen(s);
	reverse(s,0,len-1);
	printf("the reversed string is %s",s);
	return 0;
}
void reverse(char s[],int index,int len)
{
	char temp;
	temp=s[index];
	s[index]=s[len-index];
	s[len-index]=temp;
	if(index==len/2)
	{
		return;
	}
	reverse(s,index+1,len);
	return 0;
}



