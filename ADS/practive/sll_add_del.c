#include<stdio.h>
#include<stdlib.h>
struct node *add(struct node *ptr,int data);
void add_pos(struct node *head, int data, int pos);
void del_pos(struct node *head,int pos);
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
  
  
  int data = 10 , pos = 4;
  add_pos(head,data,pos);
  ptr = head;
  while(ptr != NULL)
  {
    printf("%d ",ptr->data);
    ptr=ptr->link;
  }
  
  int position = 5;
  del_pos(head,position);
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
 
 
 void add_pos(struct node *head, int data, int pos)
 {
   struct node *ptr = head;
   struct node *ptr2 = malloc(sizeof(struct node));
   ptr2->data = data;
   ptr2->link = NULL;
   
   while(pos!=2)
   {
     ptr = ptr->link;
     pos--;
   }
   
    ptr2->link = ptr->link;
    ptr->link = ptr2;
    
  }
  
 void del_pos(struct node *head,int pos)
 {
   struct node *current = head;
   struct node * previous = head;
   
   if (head == NULL)
   printf("list is already empty");
   
   else if(pos == 1)
   {
     head = current->link;
     free(current);
     current = NULL;
   }
   
   else
   {
     while(pos != 1)
     {
       previous = current;
       current = current->link;
       pos--;
     }
      
     previous->link = current->link;
     free(current);
     current = NULL;       
   }
}

//2 6 7 8 5
//2 6 7 10 8 5
//2 6 7 10 5
  
  

