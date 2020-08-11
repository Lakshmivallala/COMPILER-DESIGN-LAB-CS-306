#include<stdio.h>
#include<stdlib.h> //for built-in function exit
#include <string.h>
void main()
{
	char token,input[20];
	int n;
	printf("Enter the input string: \n");
	scanf("%s",input);
	n = strlen(input);
	while((token=input[n-1])!='\0' && (token=input[n-2])!='\0') 
	{
		if (input[n-1]==input[n-2])
		{
			printf("String has been accepted.");
			exit(0);
		}

		else
		{
			printf("String has not been accepted.");
			exit(0);
		}
	}
}