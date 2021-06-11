#include<stdio.h> 
#include<string.h> 
int main()
{
    int n,len=0; 
    char list[10][15];
    printf("\n Enter number of students: "); 
    scanf("%d",&n); 
    gets(list[0]);
    for(int i=0;i<n;i++) gets(list[i]);
    if(n==10)  printf("\nUnderflow");
    else
    {
        for(int i=0;i<n;i++)
        {
            if(strlen(list[i])>=len)
            { 
                len=strlen(list[i]);
                printf("\nLength = %d\t index = %d\t word = %s",len,i,list[i]);
            } 
        }
    } 
    printf("\n\n\n **** END ****\n\n"); 
}