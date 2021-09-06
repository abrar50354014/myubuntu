#include<stdio.h>
#include<stdlib.h>
struct node *add(struct node *ptr,int data);
struct node{
	int data;
	struct node *link;
	};	

int main()
{
  struct node *head = malloc(sizeof(struct node));
  head->data = 2;
  head->link = NULL;
  
  struct node *ptr = head;
  
  ptr=add(ptr,6);
  ptr=add(ptr,7);
  ptr=add(ptr,8);
  ptr=add(ptr,5);
  
  ptr = head;
  while(ptr != NULL)
  {
    printf("%d ",ptr->data);
    ptr=ptr->link;
  }
  
}
  
 struct node *add(struct node *ptr,int data)
 {
   struct node *temp = malloc(sizeof(struct node));
   temp->data = data;
   temp->link = NULL;
   
   ptr->link = temp;
   return temp;
 }
  
  

