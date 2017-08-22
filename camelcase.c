#include <stdio.h>

int main() {
	// your code goes here
	char str[500];
	int i,j,k;
	printf("enter the string\n");
	gets(str);
	
	for(i=0; i<str[i]!='\0';i++);
	
		if(str[0] >= 'a' && str[0] <= 'z')
		{
		str[0]=str[0]-32;
		}
	
	for(j=1;j<i;j++)
	{
		if(str[j] == ' ')
		{
			if(str[j+1] >= 'a' && str[j+1] <= 'z')
			{
				k = j + 1;
				str[k] = str[k] - 32;
				
			}
		}
	}
	
	printf("%s",str);
            return 0;
}

