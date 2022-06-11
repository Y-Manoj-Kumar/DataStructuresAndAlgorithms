  
 #include<stdio.h>
 #include<stdlib.h>
 
 
 struct node // creating a node  
 {
     int data;
     struct node* next;
 };
 
 
 //creating a function to display the node values
 
 void display(struct node **head) // need to input double pointer of head
 {
    struct node *p = *head; // Create  a pointer and assign the value of head to it which is "head = node1;"
    printf("Linked List Elements: ");
    while(p != NULL)
    {
        printf("%d  ",p->data); // Printing the data of nodes by using pointer
        p = p->next; // here link ing the node with other nodes by using "next"; moving forwars from left to right
    }
    printf("\n"); // For new line
 }
 
 
 int main()
 {
    /*
                                                   CREATING NODES MANUALLY 
    */
     
    struct node* head = NULL; // First create head
    
    // Then create rest of nodes
    
    struct node* node1 = (struct node*)malloc(sizeof(struct node*));
    struct node* node2 = (struct node*)malloc(sizeof(struct node*));
    struct node* node3 = (struct node*)malloc(sizeof(struct node*));
    
    // Connecting nodes by Data and Next...
    
    head = node1;
    
    node1->data = 10;
    node1->next = node2;
    
    node2->data = 20;
    node2->next = node3;
    
    node3->data = 30;
    node3->next = NULL;
     
    display(&head);
    
     return 0;
 }
 
 
 
 
 
 
 
