#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,l,n;
    char a[100];
    printf("Enter a string:\n");
    scanf("%s",a);
    n=strlen(a) - 1;
    for(i=0;i<=n;i++)
    {
        if(i<j)
            k=i;
        else
            k=n-i;
        while(k>0)
        {
            printf(" ");
            k--;
        }
        for(j=i;j<=n-i;j++)
        {
            printf("%c",a[j]);
        }

        j=n-i;
        if(i>j)
        {
            for(l=j;l<=i;l++)
            {
                printf("%c",a[l]);

            }

        }
        printf("\n");
    }
    return 0;
}
