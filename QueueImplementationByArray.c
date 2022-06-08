
#include<stdlib.h>
#include<stdio.h>

int  size = 10;
int rear = -1;
int front = -1;
int queue[10];

    void Enqueue()
    {
        if(rear==size-1) // we can write as well as if(rear==9) it changes according to the size of the queue
        {
            printf("Queue is full");
        }
        else
        {
            if(front==-1)
            {
                front=0;
            }
            rear++; // rear is incremented here
            printf("Enter the element to be inserted");
        }
    }



int main()
{

    int choice;
    printf("\n1. Enqueue\n2. Dequeue\n3. Display\n4. Peek\n 5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    

        if(choice == 1)
        {
            Enqueue();
        }
        else if(choice == 2)
        {
            // dequeue();
        }
        else if(choice == 3)
        {
            // display();
        }
        else if(choice == 4)
        {
            // peek();
        }
        else if(choice == 5)
        {
            // break;
        }
        else
        {
            printf("\nInvalid choice\n");
        }

    

    return 0;
}