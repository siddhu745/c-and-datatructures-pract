#include<stdio.h>
struct details
{
    int REGID;
    char name[30];
    float CGPA;    
    struct address
    {
        char village[30],district[30];
        int phone_no;
    }ad;  
};
void main()
{
    struct details student[20];
    int n;
    printf("enter the no of students: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("enter student%d details\n",i+1);
        printf("enter REGID: ");
        scanf("%d",&student[i].REGID);
        printf("enter name: ");
        scanf("%s",&student[i].name);
        printf("enter CGPA: ");
        scanf("%f",&student[i].CGPA);
        printf("**enter adress**\n");
        printf("enter village: ");
        scanf("%s",&student[i].ad.village);
        printf("enter district: ");
        scanf("%s",&student[i].ad.district);
        printf("enter phone_no: ");
        scanf("%d",&student[i].ad.phone_no);
    }
    struct details temp;
    for (int i=n; i>0; i--)
    {
        for(int j=0;j<i;j++)
        {
            if(student[j].CGPA>student[j+1].CGPA)
            {
                temp=student[j];
                student[j]=student[j+1];
                student[j+1]=temp;
            }
        }
    }
    printf("*****congratulations topper******\n");
    printf("REGID: %d\tname: %s\tCGPA: %.2f\t",student[n].REGID,student[n].name,student[n].CGPA);
    printf("village: %s\tdistrict: %s\tphone_no: %d\n",student[n].ad.village,student[n].ad.district,student[n].ad.phone_no);

    
    
}
