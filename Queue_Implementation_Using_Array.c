 #include<stdio.h>
 #include<stdlib.h>
 #define size 10

 
int front = -1;  // Initially the values of front and queue are -1
int rear = -1;
int queue[size];

void Enqueue()
{
    if(rear == size-1)
    {
        printf("QUEUE IS FULL\n");
    }
    else
    {
        int value ;
        printf("Enter value: ");
        scanf("%d",&value);
        if(front == -1)
        {
            front = 0;
        }
        rear++;
        queue[rear] = value;
        printf("Successfully Enqueued\n");
    }
}

void Dequeue()
{
    if(front == -1 || front > rear)
    {
        printf("QUEUE IS EMPTY\n");
    }
    else
    {
        front++;
        printf("Dequeued Successfully\n");
    }
}


void Peek()
{
    if(front == -1 || front > rear)
    {
        printf("QUEUE IS EMPTY\n");
    }
    else
    {
        printf("Peek Value: %d",queue[front]);
    }
}

void Display()
{
    if(front == -1 || front > rear)
    {
        printf("QUEUE IS EMPTY\n");
    }
    else
    {
        int i;
        printf("\nQueue Elements:");
        for(i=front; i<=rear; i++)
        {
           printf("%d ",queue[i]); 
        }
    }
    
}


int main()
{
        while(1) //while loop will be always true therefore it becomes infinite loop.
    {
    
        int option;
        printf("\nChOOSE option: 1)Enqueue 2)Dequeue 3)PEEK 4)DISPLAY 5)EXIT\n");
        scanf("%d",&option);
        
        if(option == 1)
        {
            Enqueue();
        }
        
        else if(option == 2)
        {
            Dequeue();
        }
        
        else if(option == 3)
        {
            Peek();
        }
        
        else if(option == 4)
        {
            Display();
        }
        
        else 
        {
            break;
        }
    }
    
    return 0;
}


