#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arithmetic_calculation(int,int);
    int identify_input(int,int);
    int operation(int,int);
    int casting(int,int);
}
int arithmetic_calculation(int a,int b)
{
    int x=(int)a;
    int y=(int)b,res;
    int c;
    int add(int x,int y)
    {
        res=x+y;
        printf("%d",res);
        return 0;
    }
    int sub(int x,int y)
    {
        res=x-y;
        printf("%d",res);
        return 0;
    }
    int mul(int x,int y)
    {
        res=x*y;
        printf("%d",res);
        return 0;
    }
    int div(int x,int y)
    {
        res=x/y;
        printf("%d",res);
        return 0;
    }
    printf("Enter your choice of arithmetic operation 1.add 2.sub 3.mul 4.sub");
    scanf("%d",c);
    switch(c)
    {
        case 1:
            {
                add(x,y);
                break;
            }
        case 2:
            {
                sub(x,y);
                break;
            }
        case 3:
            {
                mul(x,y);
                break;
            }
        case 4:
            {
                div(x,y);
                break;
            }
        default:
            {
                printf("Invalid operation");
                break;
            }

    }

}

