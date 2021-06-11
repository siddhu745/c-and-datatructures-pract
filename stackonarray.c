#include <stdio.h>
#include<stdlib.h> 
int stack[100],i,j,choice=0,n,top=-1;  
void push();  
void pop();  
void isEmpty();
void peek();
void display();
void main ()  
{  
    printf("\tStack operations using array\n");
    printf("\nEnter capacity of the stack:");   
    scanf("%d",&n);   
    printf("\n********************************************************\n");  
    while(choice != 6)  
    {  
        printf("\n\t\tselect one from below...\n");  
        printf("\n\t\t1.Push\n\t\t2.Pop\n\t\t3.empty or not\n\t\t4.peek\n\t\t5.display\n\t\t6.exit");  
        printf("\n Enter your choice:");        
        scanf("%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            {   
                push();  
                break;  
            }  
            case 2:  
            {  
                pop();  
                break;  
            }  
            case 3:  
            {  
                isEmpty();  
                break;  
            }  
            case 4:   
            {  
                peek();
                break;   
            }  
            case 5:
            {  
                display();
                break;
            }
            case 6:
            {
                exit(0);
                break;
            }
            default:
            {
                printf("choose the given options only");
            }  
        };  
    }  
}   
  
void push ()  
{  
    int val;      
    if (top == n-1 )   
    printf("\n//Overflow\n");   
    else   
    {  
        printf("Enter the value?");  
        scanf("%d",&val);         
        top = top +1;   
        stack[top] = val;
        printf("\t\tdata pushed...\n");   
    }
       
}   
  
void pop ()   
{   
    if(top == -1)   
    printf("Underflow");  
    else 
    { 
        top = top -1;
        printf("data removed....");
    }  
}
void isEmpty()
{
    if(top==-1) printf("true");
    else printf("false");
}   
void peek()
{
    printf("%d",stack[top]);
}
void display()  
{  
    for (i=top;i>=0;i--)  
    {  
        printf("%d\n",stack[i]);  
    }  
    if(top == -1)   
    {  
        printf("Stack is empty//underflow");  
    }  
}  