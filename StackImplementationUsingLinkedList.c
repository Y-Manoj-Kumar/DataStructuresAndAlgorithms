 
/*

Stack Implementation using linked list leads to unlimited size of STACK

*/

#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};

struct node *top = NULL;

void push(int value)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node*));
    temp->data = value;
    temp->link = NULL;
    if(top == NULL)
    {
      top = temp;
    }
    else    
    {
        temp->link = top;
        top = temp;
    }
    printf("Successfully Pushed\n");
}

void pop()
{
    
    if(top == NULL)
    {
        printf("STACK is EMPTY\n");
    }
    else
    {
        struct node *p = top;
        top = top->link;
        p->link = NULL;
        free(p);
        printf("\nPopped Successfully\n");
    }
    
}

void peek()
{
    if(top == NULL)
    {
        printf("STACK IS EMPTY\n");
    }
    else
    {
        printf("Peek element %d\n",top->data);
    }
    
}


void display()
{
    if(top == NULL)
    {
        printf("STACK IS EMPTY\n");
    }
    else
    {
        struct node *p = top;
        printf("Stack Elements:");
        while(p != NULL)
        {
            printf("%d ",p->data);
            p = p->link;
        }
    }
}



int main()
{
    
 push(12);
 push(23);
 push(34);
 display();
 pop();
 display();
 
    
    return 0;
}




