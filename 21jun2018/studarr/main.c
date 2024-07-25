#include <stdio.h>
#include <stdlib.h>
struct Stud
{
    char name[20],city[20],email_id[20];
    int age,contact;
    float per10,per12,cgpa;
}s[10];
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s\n",&s[i].name);
        scanf("%d\n",&s[i].age);
        scanf("%s\n",&s[i].city);
        scanf("%s\n",&s[i].email_id);
        scanf("%d\n",&s[i].contact);
        scanf("%f \n%f \n%f",&s[i].per10,&s[i].per12,&s[i].cgpa);
    }
    for(i=0;i<n;i++)
    {
        printf("%s\n",s[i].name);
        printf("%d\n",s[i].age);
        printf("%s\n",s[i].city);
        printf("%s\n",s[i].email_id);
        printf("%d\n",s[i].contact);
        printf("%.2f \n%.2f \n%.2f",s[i].per10,s[i].per12,s[i].cgpa);
    }
    return 0;
}
