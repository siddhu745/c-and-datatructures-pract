#include<stdio.h>
#include<stdlib.h>
int queue[10];
int front=-1,rear=-1;
void enqueue()
{
    int item;
    if(rear == 9) printf("<<<overflow>>>");
    else
    {
        printf("enter the value:");
        scanf("%d",&item);
        if(rear == -1 && front == -1)
        {
          rear=front=0;
          queue[rear]=item;
        }
        else
        {
            rear++;
            queue[rear]=item;
        }
        printf("<<<data enqueued>>>");
    }
}
void dequeue()
{
    if(front == -1 && rear == -1) printf("<<<under flow>>>");
    else if (rear==front)
    {
        printf("the dequeued element is %d",queue[front]);
        rear=front=-1;
    }
    else
    {
        printf("the dequeued element is %d",queue[front]);
        front++;
    }
}
void display()
{
    if(front == -1 && rear == -1) printf("<<<queue is empty>>>");
    else
    {
        printf("::printing the values in queue::\n");
        for(int i=front;i<=rear;i++)
        {
            printf("%d\n",queue[i]);
        }
    }
}
void peek()
{
    if(front == -1 && rear == -1) printf("<<<queue is empty>>>");
    else
    {
        printf("peek value is %d",queue[front]);
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
