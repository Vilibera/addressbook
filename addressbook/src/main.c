#include "includes.h"



int main(int argc,char *argv[])
{

    int operator;
    openlog(NULL,LOG_CONS,LOG_USER);
	print_menu();
	printf("Enter command: ");
	while((operator=getchar()) !='0')
	{
		if(operator=='q')
			{
			printf("\n");
			printf("Program is closing \n");
			break;
			}
		if(operator!='\n')
		{
			menuactions(operator);
			print_menu();
			printf("Enter command: ");
		}
	}

return 0;
}