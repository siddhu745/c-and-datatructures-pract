#include<stdio.h> 
#include<string.h> 
int main()
{
    int n,pos=-1;
    char list[10][15],name[15]; 
    printf("\n Enter number of students: ");
    scanf("%d",&n); 
    gets(list[0]);
    for(int i=0;i<n;i++) gets(list[i]);
    printf("\n Enter name of the student to delete: "); 
    scanf("%s",&name); 
    for(int i=0;i<n;i++)
    {
        if(strcmp(list[i],name)==0)
        { 
            pos=i;
            for(int i=pos;i<n;i++)
            { 
                strcpy(list[i],list[i+1]);
            }
            n--; 
        }
    }
    printf("\nafter deletion:\n");
    for (int i = 0; i < n; i++) puts(list[i]);
}
