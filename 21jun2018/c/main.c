#include <stdio.h>
#include <stdlib.h>

//int sub(int,int);
//int mul(int,int);
//int div(int,int);
int main()
{
    arithmetic_calculation();

    identify_input();
   operation();
   casting();
    return 0;
}
void arithmetic_calculation()
{
    int x,y,c;
    printf("Enter the two numbers\n");
    scanf("%d %d",&x,&y);
    printf("Enter your choice of arithmetic operation 1.add 2.sub 3.mul 4.div\n");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
                printf("%d",x+y);
                break;

       case 2:
                printf("%d",x-y);
                break;
        case 3:
                printf("%d",x*y);
                break;
        case 4:
                printf("%d",x/y);
                break;
        default:

                printf("Invalid operation");
                break;


    }

}
void identify_input()
{
    int i=0,n,j=0;
    char a[100];
    printf("\nEnter a input to identify the type\n");
    scanf("%s",a);
    n=strlen(a);
    if(n==1)
    {
        if((a[0]>='a' && a[0]<='z') || (a[0]>='A' && a[0]<='Z'))
        {
            printf("Input %s is character",a);
        }
        else{
            printf("Input %s is an integer",a);
        }
    }
    else
    {
          while(a[i]!=0)
        {
            if(a[i]=='.')
            {
                printf("Input %s is float",a);
                a[j]=0;
                break;
            }
            i++;
        }
        while(a[j]!=0)
        {

            if((a[j]>='a' && a[j]<='z') || (a[j]>='A' && a[j]<='Z'))
            {
                printf("input %s is string",a);
                break;
            }
            else{
                 printf("input %s is integer",a);
                break;
            }

            j++;
        }

    }

}
void operation()
{
    int n,c;
    printf("\nEnter input:\n");
    scanf("%d",&n);
    printf("\nEnter choice 1.increment 2.decrement\n");
    scanf("%d",&c);
    if(c==1)
    {
        printf("%d",++n);
    }
    else if(c==2)
    {
         printf("%d",--n);
    }
    else
    {
         printf("invalid choice");
    }
}
void casting()
{
    int n,c;
    float f;
    double d;
    printf("\nEnter integer\n");
    scanf("%d",&n);
    printf("\nEnter choice:1.float 2.double 3.character\n");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
            f=(float)n;
            printf("\n%f",f);
            break;
        case 2:
            d=(double)n;
            printf("\n%lf",d);
            break;
        case 3:
            printf("%c",n);
            break;
        default:
             printf("Invalid choice");
             break;
    }
}


