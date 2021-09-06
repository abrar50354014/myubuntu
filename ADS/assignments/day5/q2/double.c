#include<stdio.h>
#include<stdlib.h>
struct node *addatend(struct node *head,int data);
struct node *addafterpos(struct node *head,int data,int position);
struct node *delinter(struct node *head,int position);

struct node{
  struct node *prev;
  int data;
  struct node *next;
  };

  
  int main()
  {
    struct node *head = malloc(sizeof(struct node));
    head->prev = NULL;
    head->data = 4;
    head->next = NULL;
    struct node *ptr;
    head = addatend(head,7);
    head = addatend(head,9);
    head = addatend(head,11);
    head = addatend(head,15);
    head = addatend(head,18);
    ptr = head;
    printf("\ncreated doubly linked list: \n");
    while(ptr!=NULL)
    { 
      printf("%d ",ptr->data);
      ptr=ptr->next;
    }
     
// adding element at particular position
    int data = 13, position = 4;
    addafterpos(head,data,position);
    ptr = head;
    printf("\ndoubly linked list after adding element 13: \n");
    while(ptr!=NULL)
    { 
      printf("%d ",ptr->data);
      ptr=ptr->next;
    }
    
//deleting an element of particular position i.e element 15 at 6th position
    int pos = 6;
    head = delinter(head,pos);
    ptr = head;
    printf("\ndoubly linked list after deleting element 15: \n");
    while(ptr!=NULL)
    { 
      printf("%d ",ptr->data);
      ptr=ptr->next;
    }
    
    
    
}

  //add function
struct node *addatend(struct node *head,int data)
{
  struct node *tp;
  struct node *temp = malloc(sizeof(struct node));
  temp->prev = NULL;
  temp->data = data;
  temp->next = NULL;
  
  tp = head;
  while(tp->next != NULL)
  tp = tp->next;
  
  tp->next = temp;
  temp->prev = tp;
  return head;
  } 
  
  //addafterpos function
struct node *addafterpos(struct node *head,int data,int position)
{
  struct node *temp = head;
  struct node *temp2 = NULL;
  struct node *newp = malloc(sizeof(struct node));
  newp->prev = NULL;
  newp->data = data;
  newp->next = NULL;
 
  while(position !=1)
  {
    temp = temp->next;
    position--;
  }
  temp2 = temp->next;
  temp->next = newp;
  temp2->prev = newp;
  newp->next = temp2;
  newp->prev = temp;
  return head;
}

//delinter function
struct node *delinter(struct node *head,int position)
{
  struct node *temp = head;
  struct node *temp2 = NULL;
  
  while(position>1)
  {
    temp = temp->next;
    position --;
  }
  
  temp2 = temp->prev;
  temp2->next = temp->next;
  temp->next->prev = temp2;
  free(temp);
  temp = NULL;
  return head;
}
  
  
  
  
  //4 7 9 11 13 15 18
  
