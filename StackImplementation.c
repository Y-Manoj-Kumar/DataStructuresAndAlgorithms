 /*

STACK:In stack we have push,pop,peek,display

*/


 #include<stdio.h>
 #include<stdlib.h>
 #define size 10
 
 int stack[size];// Declaring a stack
 int top = -1;
 
 void push() // for push operation we need to check whether the stack is aready full or not
 {
    
    if(top == size-1)
    {
        printf("STACK IS FULL");
    }
    else
    {
        int value;
        printf("Enter a value:");
        scanf("%d",&value);
        top++;                      // The top value get increased here
        stack[top] = value;
        printf("Value is Pushed Successfully\n");
    }
 }
 
 void pop()
 {
    if(top == -1)
    {
        printf("STACK IS EMPTY\n");
    }
    else
    {
 
        top--;                      // The top value get decreased here
        printf("Value is Popped Successfully\n");
    }
 
 }
 
 void peek()
 {
     if(top == -1)
     {
         printf("STACK IS EMPTY\n");
     }
     else
     {
         
         printf("Peek Value: %d ",stack[top]);    
     }

 }
 
 void display()
 {
    if(top == -1)
    {
      printf("STACK IS EMPTY");  
    }
    else
    {
        int i ;
        for(int i = 0; i<=top; i++)
        {
            printf("%d  ",stack[i]);
        }
         
    }
 }
 
 
 int main()
 {

     
    while(1) //while loop will be always true therefore it becomes infinite loop.
    {
    
        int option;
        printf("\nChOOSE option: 1)PUSH 2)POP 3)PEEK 4)DISPLAY 5)EXIT\n");
        scanf("%d",&option);
        
        if(option == 1)
        {
            push();
        }
        
        else if(option == 2)
        {
            pop();
        }
        
        else if(option == 3)
        {
            peek();
        }
        
        else if(option == 4)
        {
            display();
        }
        
        else 
        {
            break;
        }
    }
     
     
     return 0;
 }
 
 
 