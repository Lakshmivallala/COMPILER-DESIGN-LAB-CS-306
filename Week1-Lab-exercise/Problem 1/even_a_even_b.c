#include<stdio.h>
#include<stdlib.h> //for built-in function exit
void main()
{
	int state=0;
	int i=0;
	char token,input[20];
	printf("Enter the input string: \n");
	scanf("%s",input);
	while((token=input[i++])!='\0') //while string != null
	{
		switch(state)
		{
			case 0:
			if(token=='a')
				state=1;
			else if(token=='b')
				state=2;
			else
			{
				printf("Invalid token");
				exit(0);
			}
			break;

			case 1:
			if(token=='a')
				state=0;
			else if(token=='b')
				state=3;
			else
			{
				printf("Invalid token");
				exit(0);
			}
			break;

			case 2:
			if(token=='a')
				state=3;
			else if(token=='b')
				state=0;
			else
			{
				printf("Invalid token");
				exit(0);
			}
			break;

			case 3:
			if(token=='a')
				state=2;
			else if(token=='b')
				state=1;
			else
			{
				printf("Invalid token");
				exit(0);
			}
			break;
		}
	}
	if(state==0)
		printf("String has been accepted.");
	else
		printf("String has not been accepted.");
}