#include <stdio.h>
#include <stdlib.h>

struct str{
    char a[32];
}k[20];
void uppercase(int);
void flupper(int);
void oddeven(int);
void erev_ot(int);
int main()
{

    operation();
    return 0;
}
void operation()
{
    int ch,n;
    int i;

    printf("Enter n no of a string:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",k[i].a);
    }
    printf("\nEnter the choice 1.uppercase 2.first&last uppercase 3.odd and even 4.evenreverse/oddtoggle:\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            uppercase(n);
            break;
        case 2:
            flupper(n);
            break;
        case 3:
            oddeven(n);
            break;
        case 4:
            erev_ot(n);
            break;
        default:
            printf("\nInvalid choice");
            break;

    }
}
void uppercase(int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%s ",strupr(k[i].a));
    }
}
void flupper(int n)
{
    int i,c,j;
    for(j=0;j<n;j++)
    {
        c=strlen(k[j].a);
        i=0;
        k[j].a[i]=toupper(k[j].a[i]);
        k[j].a[c-1]=toupper(k[j].a[c-1]);
        printf("%s\n",k[j].a);

    }
}
void oddeven(int n)
{
    int i;
    printf("---------odd numbers-------------\n");
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {

            printf("%s\n",k[i].a);
        }
    }
    printf("---------even numbers-------------\n");
    for(i=0;i<n;i++)
    {
        if(i%2!=0)
        {

            printf("%s\n",k[i].a);
        }
    }
}
void erev_ot(int n)
{
    int i,c,j;
    printf("---------odd numbers-------------\n");
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            c=strlen(k[i].a);
            for(j=c-1;j>=0;j--)
            {
                if(j%2!=0)
                    printf("%c",toupper(k[i].a[j]));
                else
                    printf("%c",k[i].a[j]);
            }
            printf("\n");
        }
    }
    printf("---------even numbers-------------\n");
    for(i=0;i<n;i++)
    {
        if(i%2!=0)
        {
              c=strlen(k[i].a);
            for(j=c-1;j>=0;j--)
                printf("%c",k[i].a[j]);
            printf("\n");
        }
    }
}
