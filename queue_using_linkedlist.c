#include<stdio.h>
#include<stdlib.h>
int size=5;
struct node
{
   int data;
   struct node *link;   
};
struct node *head;
int front = -1,rear = -1;
void enqueue()
{
    int item;
    struct node *ptr,*temp;
    if(rear == size-1) printf("<<<overflow>>>");
    else
    {
        printf("enter the value:");
        scanf("%d",&item);
        if(rear == -1)
        { 
          head = (struct node*)malloc(sizeof(struct node));
          if(head == NULL) printf("over flow");
          else
          {
            rear=0;
            front=0;
            head->data=item;
            head->link=NULL;
          }
        }
        else
        {
            rear++;
            ptr = (struct node*)malloc(sizeof(struct node));
            temp = head;  
            while (temp -> link != NULL)  
            {  
                temp = temp -> link;  
            }  
            temp->link = ptr;  
            ptr->link = NULL;  
        }
        printf("<<<data enqueued>>>");
    }
}
void dequeue()
{
    if(front == -1 && rear == -1) printf("<<<under flow>>>");
    else 
    {
        if (rear==front)
        {
            rear=front=-1;
        }
        else
        {
            front++;
        }
        printf("<<<dequeued>>>");
    }
}
void display()
{
    struct node *ptr;
    if(front == -1 && rear == -1) printf("<<<queue is empty>>>");
    else
    {
        ptr = head;
        printf("::printing the values in queue::\n");
        while (ptr!=NULL)  
        {  
            printf("\n%d",ptr->data);  
            ptr = ptr -> link;  
        }  
    }
}
void peek()
{
    if(front == -1 && rear == -1) printf("<<<queue is empty>>>");
    else
    {
        printf("peek value is %d",head->data);
    }
}
void main_menu()
{
    printf("\n\t^^^main menu^^^\n");
    printf("\n::choose a operation on queue::\n");
    printf("\n\t1.ENQUE\n\t2.DEQUEUE\n\t3.DISPLAY\n\t4.PEEK\n\t5.exit\n");
    printf("\nenter your choice : ");
}
void main()
{
    int choice=0;
    while(choice!=5)
    {
        
            main_menu();
            scanf("%d",&choice);
            switch(choice)  
            { 
                case 1:  
                enqueue();         
                break;  
                case 2:  
                dequeue();       
                break;  
                case 3:  
                display();       
                break;  
                case 4:  
                peek();        
                break; 
                case 5:
                exit(0); 
                default:  
                printf("Please enter valid choice..");
            }
            
    }
}
