#include<stdio.h>
#include<string.h>

int digit(char);
int main()
{
	char ro_no[1000];
	int i=0;
	long int no=0;
	printf("enter any roman number(I,V,X,L,C,D,M)\n");
	scanf("%s",&ro_no);
	while(ro_no[i])
	{
		if(digit(ro_no[i]) < 0)
		{
		printf("invalid roman number");
		return 0;
	    }
	    if((strlen(ro_no)-i) > 2)
	    {
	    	if(digit(ro_no[i]) < digit(ro_no[i+2]))
	    	{
	    		printf("invalid roman number");
	    		return 0;
	    	}
		}
		
	
	if(digit(ro_no[i]) >= digit(ro_no[i+1]))
	no = no + digit(ro_no[i]);
	else
	{
		no = no + digit(ro_no[i+1]) - digit(ro_no[i]);
		i++;
	}
	i++;
}
		printf("the answer is %ld",no);
	return 0;
}

int digit(char c)
{
	int value=0;
	switch(c)
	{
		case 'I':
			value=1;
			break;
		case 'V':
			value=5;
			break;
		case 'X':
			value=10;
			break;
		case 'L':
			value=50;
			break;
		case'C':
			value=100;
			break;
		case 'D':
			value=500;
			break;
		case 'M':
			value=1000;
			break;
		default:
			printf("invalid numeral");
		
	}
return value;
}
