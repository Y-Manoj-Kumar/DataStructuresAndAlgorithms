 
#include<stdio.h>
#include<stdlib.h>
// #define size 10

int stack[10];// Declaring the stack array size
int top=-1; // Initializing the top of the stack to -1

int main()
{
    int choice,item;
    while(1)
    {
        printf("\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("Enter the element to be pushed: ");
                scanf("%d",&item);
                push(item);
                break;
            case 2:
                item=pop();
                if(item==-1)
                    printf("Stack is empty\n");
                else
                    printf("Popped element is %d\n",item);
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Wrong choice\n");
        }
    }
}

