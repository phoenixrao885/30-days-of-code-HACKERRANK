#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

typedef struct Node
{
    int data;
    struct Node* next;
}Node;

Node* removeDuplicates(Node *head){
    Node *new;
    Node *temp;
  new=head;
  temp=head;
  new=new->next;
  while (new!=NULL) {
  
  if (new->data==temp->data) 
  {
  temp->next=new->next;
  new=new->next;
  }
  else{
  new=new->next;
temp=temp->next;
  }
  }
  return head;
}

Node* insert(Node *head,int data)
