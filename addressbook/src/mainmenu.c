#include <stdio.h>
#include "includes.h"
// struct node *head;  
void print_menu(void)
{
	printf("\n\n\t \t Welcome to main menu \n");
	printf("1. Display contacts \n");
	printf("2. Add new contact \n");
	printf("3. Delete contact\n");
	printf("4. Find contact \n");
	printf("h. help \n");
	printf("q. quit \n");
}



void menuactions(char operator)
{
    int value=0,dposition = 0;
	char name[10],surname[15],email[25], pnumber[15],opt1,cvalue[25],delval[25],val1[25],val2[25];
	// char *name,*surname,*email, *pnumber;
	switch(operator) {

			case '1':
				printf("Your contact list: \n");
				display_list();
				break;

			case '2':
				printf("Enter contact name:  \n\n");
				scanf("%s",name);
				printf("Enter contact surname: \n\n");
				scanf("%s",surname);
				printf("Enter phone number: \n\n");
				scanf("%s",pnumber);
				printf("Enter email address: \n\n");
				scanf("%s",email);
                printf("Where you want to insert: \n1. At Beginning\n2. At End\n3. Between\nq;quit\nEnter your choice: ");
                scanf("%s",&opt1);
				if(strcmp(&opt1,"q")==0){
					break;
					printf("Program is closing");
				}
				else{	
                	switch(opt1)
                    {
                        case '1':
                           	insertAtBeginning(name,surname,pnumber,email);
                            break; 
                        case '2':
                            insertAtEnd(name,surname,pnumber,email);
                            break;
                        case '3': 
                            printf("Enter the first value where you want to insert: ");
                            scanf("%s",val1);
							printf("Enter the first value where you want to insert: ");
							scanf("%s",val2);
							insertBetween(name,surname,pnumber,email,val1,val2);
                            break;
						case 'q':
							break;
			            default:
				            printf("Command not found\n");
							break;
                    }   
                }
				break;
				
			case '3':
                    printf("\nHow do you want to Delete: \n1. By position\n2. All list\n3. given_node\nq: quit\nEnter your choice: ");
                    scanf("%s",&opt1);
                    switch(opt1)
                    {
                
                  		case '1':    
							printf("Please, enter position index: ");
						  	scanf("%d",&dposition);  
						  	removebyposition(dposition);
                            break;
                   		case '2':   
						   	removealllist();
                            break;
                   		case '3':      
						   	printf("Enter the value which you want to delete: ");
                            scanf("%s",delval);
                            removenode(delval);
                            break;
						case 'q':
							break;
                   		default:    
						   	printf("\nWrong Input!! Try again!!!\n\n");
				   			break;
                } 
			break;
                
			case '4':
                    printf("Search \n1. Search by position\n2. Search by name\nq:quit\nEnter your choice: ");
                    scanf("%s",&opt1);
                    switch(opt1)
                    {
                   		case '1':  
						   	printf("Enter position :");
							scanf("%d",&value);    
						   	searchNodebyposition(value);
                            break;
                   		case '2':  
						   	printf("Enter name : ");
							scanf("%s",cvalue); 
						   	searchNodebyname(cvalue);
                            break;
						case 'q':
							break;
                   		default:     
						   	printf("\nWrong Input!! Try again!!!\n\n");
				   			break;
                    }   
			break;
                
			case 'h':

				printf("\n\n");
				printf("Vilius Bernikas \n");
				break;

			case 'q':
				break;

			default:
				printf("Command not found\n");

		}

}
