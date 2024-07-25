#include<stdio.h>
#include <stdlib.h>

int main()
{
    int i,k=0,j,n,d=0;
    char s[500][200],a[500],b[500],c;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
     {
         scanf("%c ",&s[i][j]);
      //printf("%c",s[i][j]);
     }
}
for(i=0;i<n;i++)
{
        if(i%2==0)
        {
            for(j=0;j<n;j++)
            {
                a[k]=s[i][j];

                k++;
            }
        }
        else
        {
            for(j=n-1;j>=0;j--)
            {
                a[k]=s[i][j];
                k++;
            }

        }
}
//printf("%d",k);
c='a';
k--;
if(n%2!=0)
{
    for(j=0;j<(n*n)/2+1;j++)
    {

        if(a[j]==a[k])
        {
                printf("%c ",a[j]);
                d=1;
        }
        k--;
        c++;
    }
}
else
{
    k=0;
    for(i=n-1;i>=0;i--)
    {
        if(i%2!=0)
        {
            for(j=n-1;j>=0;j--)
            {
                b[k]=s[i][j];
               // printf("%c",b[k]);
                k++;
            }
        }
        else
        {
            for(j=0;j<n;j++)
            {
                b[k]=s[i][j];
               // printf("%c",b[k]);
                k++;
            }
        }
    }
   // printf("%d",k);
    for(i=0;i<k/2;i++)
    {
        if(a[i]==b[i])
        {
            printf("%c ",a[i]);
            d=1;
        }
        c++;
    }
}
if(d==0)
printf("-1");

}
