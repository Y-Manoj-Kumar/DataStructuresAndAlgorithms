 #include<stdio.h>
 #include<stdlib.h>
 
 
 /*
 
 p         --> node
 p->data   --> node data
 p->next   --> node address
 
 */
 
 
 struct node
 {
   int data;
   struct node* next;
 };
 
 
 void insertion_At_End(struct node **head)
 {
    struct node* temp = (struct node*)malloc(sizeof(struct node*)); // Created a node
    int value;
    printf("Enter a value: ");
    scanf("%d",&value);
    
    temp->data = value;
    temp->next = NULL; // SUCCESSFULLY created a node 
    
    struct node *p = *head; // created a pointer to travel
                            // " *head " represents the value of head  
                              
    if(p == NULL)  // p represents NODE
    {
        *head = temp; // When there is a NULL we are passing a node we created.
                      // Passing a value to head.
    }
    else
    {
        while(p->next != NULL) // P->next represents "NODE ADDRESS";
        {
            p = p->next;  //This represents moving forward in a Linked List
        }
        p->next = temp; // Before the NULL our node get linked.
    }
    printf("\nValue is Inserted SUCCESSFULLY\n");
    
 }
 
void insertion_At_Specified_Position(struct node **head)
 {
    int position,value;
    printf("Enter Position and Value: ");
    scanf("%d %d",&position,&value);
    int count = 1;                          //To count the position 
    struct node *p = *head;                // To count it needs to move so need to create a pointer
    
    while(p != NULL)  // This is for finding the position
    {
        if(count == position)
        {
            break;
        }
        p = p->next;  // To travel in linked list
        count++;      // Increseaing the count value
    }
    
    if(p == NULL)
    {
        printf("List is empty");
    }
    else
    {
        struct node* temp = (struct node*)malloc(sizeof(struct node*));
        temp->data = value;
        temp->next = p->next;
        p->next = temp;
    }
    printf("\nSUCCESSFULLY Inserted value at your position\n");
 }
 
 void deletion(struct node **head)
 {
    int target;
    printf("Enter a target value: ");
    scanf("%d",&target);
    
    struct node *p = *head;
    struct node *q = NULL;
    
    while(p != NULL) // finding the target value 
    {
        if(p->data == target)
        {
            break;
        }
        q = p; //Assigning the value of pointer p to pointer q  and q is stable and p moves 
        p = p->next; // Moves to next
    }
    if(p == NULL)
    {
        printf("Target value is not find");
    }
    else if(q == NULL)
    {
        *head = p->next;
    }
    else
    {
        q->next = p->next; // Changing addresses 
        p->next = NULL;
        free(p);                             // Removed value 
        printf("\nValue Deleted SUCCESSFULLY\n");
    }
 }
 
 void searching(struct node **head)
 {
    int Target;
    printf("Enter Target value: ");
    scanf("%d",&Target);
    int check = -1;
    
    struct node *p = *head;
    while(p != NULL)
    {
        if(p->data == Target)
        {
            check = 1;
            break;
        }
        p = p->next;
    }
    if(check = -1)
    {
        printf("\nValue not found\n");
    }
    else
    {
        printf("\nValue found SUCCESSFULLY\n");      
    }

    
 }
 
 void printing_Elements(struct node **head)
 {
     struct node *p = *head;
     printf("\nLinked List Elements: ");
     
     while(p != NULL)
     {
         printf("%d ",p->data);
         p = p->next; 
     }
 
 }
 
 
 int main()
 {
    struct node* head = NULL;
    printf("                                 SINGLY LINKED IMPLEMENTATION \n ");
    
    while(1)
    {
        int option;
        printf("\nCHOOSE OPRATION: \n1)Insertion at the END \n2)Insertion at SPECIFIED position \n3)Deletion \n4)Searching \n5)Printing Elements \n6)Exit \n ENTER OPTION : ");
        scanf("%d",&option);
        if(option == 1)
        {
            insertion_At_End(&head);
        }
        else if(option == 2)
        {
            insertion_At_Specified_Position(&head);
        }
        else if(option == 3)
        {
            deletion(&head);
        }
        else if(option == 4)
        {
            searching(&head);
        }
        else if(option == 5)
        {
            printing_Elements(&head); // Input as Head address.
        }
        else
        {
            break;
        }
    }
     
     return 0;
 }
 
 
 
 
 