#include<stdio.h>
#include<stdlib.h>
struct node *add(struct node *ptr,int data);
void add_pos(struct node *head,int data,int pos);
void del_pos(struct node **head,int position);
struct node{
  int data;
  struct node *link;
  };
  
  int main()
  {
    struct node *head = malloc(sizeof(struct node));
    head->data = 4;
    head->link = NULL;
    
    struct node *ptr = head;
    ptr = add(ptr,7);
    ptr = add(ptr,9);
    ptr = add(ptr,11);
    ptr = add(ptr,15);
    ptr = add(ptr,18);
    ptr = head;
    printf("\ncreated single linked list: \n");
    while(ptr!=NULL)
    { 
      printf("%d ",ptr->data);
      ptr=ptr->link;
    }
// adding element at particular position
    int data = 13, position = 5;
    add_pos(head,data,position);
    
    ptr = head;
    printf("\nsingle linked list after adding element 13: \n");
    while(ptr!=NULL)
    { 
      printf("%d ",ptr->data);
      ptr=ptr->link;
    }
    
//deleting an element of particular position i.e element 15 at 6th position
    int pos = 6;
    del_pos(&head,pos);
    ptr = head;
    printf("\nsingle linked list after deleting element 15: \n");
    while(ptr!=NULL)
    { 
      printf("%d ",ptr->data);
      ptr=ptr->link;
    }
        
    
    
    return 0;
}


//FUNCTIONS FOR CREATING,INSERTING,DELETING single linked list

//add function
struct node *add(struct node *ptr,int data)
{
  struct node *temp = malloc(sizeof(struct node));
  temp->data = data;
  temp->link = NULL;
  ptr->link = temp;
  return temp;
  } 
  
  
//add_pos function
void add_pos(struct node *head,int data,int pos)
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
//del_pos function
void del_pos(struct node **head,int position)
{
  struct node *current = *head;
  struct node *previous = *head;
  if(*head == NULL)
  {
    printf("\nlist is already empty\n");
  }
  else if(position == 1)
  {
    *head = current->link;
    free(current);
    current = NULL;
  }
  else
  {
    while(position!=1)
    {
      previous = current;
      current = current->link;
      position--;
    }
    
  previous->link = current->link;
  free(current);
  current = NULL;
  }
} 
  



//4 7 9 11 13 15 18
 

    
