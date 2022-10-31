#include <stdio.h>
#include <stdlib.h>
  
struct Node {
    int data;
    struct Node* next;
};
  

void insertAfter(struct Node* n)
{
   int new_data,val;
   printf("enter the value to insert after\n" );
   scanf("%d",&val);
   printf("enter the value to be insert \n" );
   scanf("%d",&new_data);
     while (n != NULL) {
       if (n->data==val)
       {
        struct Node* new_node
        = (struct Node*)malloc(sizeof(struct Node));

    new_node->data = new_data;

    new_node->next = n->next;
 
    n->next = new_node;
    break;
       }else
       {
          n = n->next;
       }
      
    }

  
}

void beggining(struct Node** head_ref)
{     
    int new_data ;
    printf("enter te data \n");

    scanf("%d",&new_data);
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
  
    
    new_node->data  = new_data;
  
   
    new_node->next = (*head_ref);
  
   
    (*head_ref)   = new_node;
}

void endadd(struct Node* n)
{     
    int new_data ;
    printf("enter te data \n");

    scanf("%d",&new_data);
   
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
 
    struct Node *last = n;  
  

    new_node->data  = new_data;
 
         
    new_node->next = NULL;

    if (n == NULL)
    {
       n = new_node;
       return;
    } 
      

    while (last->next != NULL)
        last = last->next;

    last->next = new_node;
    return;   
    

}


void printList(struct Node* n)
{
    while (n != NULL) {
        printf(" %d ", n->data);
        n = n->next;
    }
    printf("\n");
}

int getCount(struct Node* head)
{
    int count = 0; // Initialize count
    struct Node* current = head; // Initialize current
    while (current != NULL) {
        count++;
        current = current->next;
    }
    return count;
}



static void reverse(struct Node** head_ref)
{
    struct Node* prev = NULL;
    struct Node* current = *head_ref;
    struct Node* next = NULL;
    while (current != NULL) {

        next = current->next;
 

        current->next = prev;
 

        prev = current;
        current = next;
    }
    *head_ref = prev;
}

int main()
{
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;
  
  
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
  
    head->data = 1;
    head->next = second; 
  
    second->data = 2; 
    second->next = third;
  
    third->data = 3; 
    third->next = NULL;
  
    beggining(&head);

    printList(head);
    insertAfter(head);
    printList(head);
    endadd(head);
     printList(head);
     int c = getCount(head);
     printf("lengt is %d\n",c);

     reverse(&head);
     printList(head);
  
    return 0;
}