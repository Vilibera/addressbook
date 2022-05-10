#include "includes.h"
struct node *head = NULL;  
struct node *list = NULL;
struct node *newNode;
int count = 0;
int c=0;


void display_list()
{
   struct node *temp = head;
    while (temp != NULL) {
      c++;
      printf("%d,%s %s %s %s\n",c, temp->name, temp->surname, temp->phonenumber,temp->email);
      temp->position = c;
      temp = temp->next;
    }
    c=0;
}
void insertfunc(char *name,char *surname,char *pnumber, char *email)
{
   newNode = (struct node*) malloc(sizeof(struct node));
   newNode->position = c;
   strcpy(newNode->name, name);
   strcpy(newNode->surname,surname);
   strcpy(newNode->phonenumber,pnumber);
   strcpy(newNode->email,email);
}
void insertAtBeginning(char *name,char *surname,char *pnumber, char *email)
{
   insertfunc(name,surname,pnumber,email);
   newNode->next = head;
   head = newNode;
   printf("\nOne node inserted!!!\n");
}
void insertAtEnd(char *name,char *surname,char *pnumber, char *email)
{
   insertfunc(name,surname,pnumber,email);
   newNode->next = NULL;
   if(head == NULL){
        head = newNode;
   }
   else
   {
      struct node *temp = head;
      while(temp->next != NULL)
         temp = temp->next;
      temp->next = newNode;
   }
   printf("\nOne node inserted!!!\n");
}
void insertBetween(char *name,char *surname,char *pnumber, char *email, char *loc1, char *loc2)
{
   insertfunc(name,surname,pnumber,email);
   if(head == NULL)
   {
      newNode->next = NULL;
      head = newNode;
   }
   else
   {
      struct node *temp=head;
      while((strcmp(temp->name,loc1) && strcmp(temp->name,loc2))!=0)
        temp = temp->next;
      newNode->next = temp->next;
      temp->next = newNode;
   }
   printf("\nOne node inserted!!!\n");
}

void removebyposition(int dposition)
{
   struct node *temp1 = head,*temp2;
   while(temp1->position !=c )
   {
     if(temp1 -> next == NULL){
        printf("\nGiven node not found in the list!!!");
     }
     temp2 = temp1;
     temp1 = temp1 -> next;
   }
   temp2 -> next = temp1 -> next;
   free(temp1);
   printf("\nOne node deleted!!!\n\n");
 }


void removealllist()
{
     struct node *temp;

    while(head != NULL)
    {
        temp = head;
        head = head->next;

        free(temp);
    }

    printf("SUCCESSFULLY DELETED ALL NODES OF LINKED LIST\n");
}
void removenode(char *delValue)
{
      struct node *temp1 = head,*temp2;
   while(strcmp(temp1->name , delValue) !=0 )
   {
     if(temp1 -> next == NULL){
        printf("\nGiven node not found in the list!!!");
     }
     temp2 = temp1;
     temp1 = temp1 -> next;
   }
   temp2 -> next = temp1 -> next;
   free(temp1);
   printf("\nOne node deleted!!!\n\n");
 }

bool searchNodebyposition( int key)
{
  struct node *current = head;

  while (current != NULL) {
    if (current->position == key){
      printf("%s, %s, %s, %s \n",current->name,current->surname,current->phonenumber,current->email);
      return true;
    }
      current = current->next;
  }
   printf("contact not found");
   return false;
}
// Search a node
bool searchNodebyname(char *key) 
{
  struct node* current = head;
  printf("%s\n",key);

  while (current != NULL) {
    if ((strcmp(current->name, key) || strcmp(current->surname,key) || strcmp(current->email,key) ||strcmp(current->phonenumber,key))==0) {
      printf("Contact found: \n");
      printf("%s, %s, %s, %s \n",current->name,current->surname,current->phonenumber,current->email);
      return true;

    }

      current = current->next;
  }
  printf("contact not found");
  return false;
}