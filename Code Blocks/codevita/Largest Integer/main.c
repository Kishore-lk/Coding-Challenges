#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,a[100][100],x=0,l=0,b,i,j,t;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    while(x<n*m)
    {
        j=m;l=0;
        for(i=n;i>0;i--)
        {
            if(a[i][j]>l)
            {
                l=a[i][j];
                    b=i;
            }
        }
            printf("%d",l);
            for(j=m;j>1;j--)
            {
                t=a[b][j];
                a[b][j]=a[b][j-1];
                a[b][j-1]=t;
            }
            a[b][1]=-111;
        x++;
    }
}
