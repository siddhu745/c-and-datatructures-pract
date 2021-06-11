#include <stdio.h>
#include<stdlib.h> 
struct node
{
    int data;
    struct node *link;
};
struct node *head=NULL;
int top=-1,n,choice;
void push();  
void pop();
void isEmpty();
void peek();
void display();
void main ()  
{  
    printf("\tStack operations using linked list\n");
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
    if (top == n-1)   
    printf("\n//Overflow\n");   
    else   
    {  
        top=top+1;
        int item;
        printf("\nEnter value\n");    
        scanf("%d",&item);
        if(top==0)
        {
            head=malloc(sizeof(struct node));
            head->data=item;
            head->link=NULL;
        }
        else
        {
            struct node *ptr;
            ptr = (struct node *) malloc(sizeof(struct node *));
            if(ptr == NULL)  
            {  
                printf("\nOVERFLOW");  
            }
            else
            {   
                ptr->data = item;  
                ptr->link = head;  
                head = ptr;
            }
        }
        printf("data pushed....");  
           
    }   
} 
void pop ()   
{   
    if(top == -1)   
    printf("Underflow");  
    else
    { 
        struct node *ptr;  
        ptr = head;  
        head = ptr->link;  
        free(ptr); 
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
    if(top==-1) printf("stack is empty...");
    else printf("%d",head->data);
}
void display()  
{   
    if(top == -1)   
    {  
        printf("Stack is empty//underflow");  
    }    
    else  
    {  
        struct node *ptr;  
        ptr = head;
        printf("\nprinting values . . . . .\n");   
        while (ptr!=NULL)  
        {  
            printf("\n%d",ptr->data);  
            ptr = ptr -> link;  
        }  
    }   
}  
