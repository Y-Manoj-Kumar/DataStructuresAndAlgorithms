#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};


struct node *front = NULL;
struct node *rear = NULL;

void Enqueue(int value)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node*));
    temp->data = value;
    temp->link = NULL;
    if(front == NULL)
    {
        front = rear = temp;
    }
    else
    {
        rear->link = temp;
        rear = temp;
    }
    printf("Enqueued Successfully\n");
}

void Dequeue()
{
    if(front == NULL)
    {
        printf("QUEUE IS EMPTY\n");
    }
    else
    {
        struct node *temp = front;
        front = front->link;
        temp->link = NULL;
        free(temp);
        // if(front = NULL)
        // {
        //     rear = NULL;
        // }
        printf("Dequeued Successfully\n");
    }
}

void Peek()
{
    if(front == NULL)
    {
        printf("\nQUEUE IS EMPTY");
    }
    else
    {
        printf("Peek Vlaue: %d ",front->data);
        
    }
    
}


void Display()
{
    if(front == NULL)
    {
        printf("QUEUE IS EMPTY");
    }
    else
    {
        struct node *p = front;
        printf("Queue Elements:");
        while(p != NULL)
        {
            printf("%d ",p->data);
            p = p->link;
            
        }
        
    }
    
}


int main()
{
    
    Enqueue(12);
    Enqueue(32);
    Enqueue(354);
    Dequeue();
    Display();
    
    
    return 0;
}






