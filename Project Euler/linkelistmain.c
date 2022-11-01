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
        printf(" -> %d  ", n->data);
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

struct Node* removeFirstNode(struct Node* head)
{
    if (head == NULL)
        return NULL ;
 
    
    struct Node* temp = head;
    head = head->next;
 
  free(temp);
 
  return head;
}

struct Node* removeLastNode(struct Node* head)
{
    if (head == NULL)
        return NULL;
 
    if (head->next == NULL) {
        free(head);
        return NULL;
    }
 
  
    struct Node* second_last = head;
    while (second_last->next->next != NULL)
        second_last = second_last->next;
 
   
    free (second_last->next);
 
 
    second_last->next = NULL;
   return head;
   
}
void deletepos (struct Node* head)
{
     int pos;
     printf("enter te position\n");
     scanf("%d",&pos);
    struct Node* temp = head;
    int i;
    if (pos == 0) {
        printf("\nElement deleted is : %d\n", temp->data);
        head = head->next; 
        temp->next = NULL;
        free(temp);
    }
    else {
        for (i = 0; i < pos - 1; i++) {
            temp = temp->next;
        }
      
        struct Node* del
            = temp->next; 
        temp->next = temp->next->next;
        printf("\nElement deleted is : %d\n", del->data);
        del->next = NULL;
        free(del); 
    }
    
 
}

int main()
{   int coice;
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
    printf("initialized a linked list with 3nodes having data 1,2,3\n");


while (1)
{
    printf("1. Add at the Beginning\n");
printf("2. Add at the End\n");
printf("3. Add at Specified Position\n");
printf("4. Display\n");
printf("5. Count\n");
printf("6. Reverse\n");
printf("7. Delete from the Beginning\n");
printf("8. Delete from the End\n");
printf("9. Delete from Specified Position\n");
printf("10, Quit\n");
printf("Anshdeep Singh      03313202721 \n");
printf("Enter choice:");
scanf("%d",&coice);
    switch (coice)
    {
    case 1 :
        beggining(&head);
        printList(head);
        break;
     case 2 :
        endadd(head);
        printList(head);
        break;
     case 3 :
        insertAfter(head);
        printList(head);
        break;
     case 4 :
        printList(head);
        break;
     case 5 :
        
     printf("lengt is %d\n", getCount(head));
        break;
     case 6 :
       reverse(&head);
       printList(head);
        break;
    case 7 :
      head = removeFirstNode(head);
       printList(head);
        break;
    case 8 :
        head = removeLastNode(head);
       printList(head);
        break;
    case 9 :
       deletepos(head);
       printList(head);
        break;
    case 10:
    exit(0);
    break;

    default:
        break;
    }
}

    

    return 0;
}