#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,i,j,z=0,s=0,t,b[10000],c[10000],l,k,x=0,d=0;
    scanf("%d %d",&n,&m);
    int a[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(j=0;j<m;j++)
    {
        s=0;
        for(i=0;i<n;i++)
        {
            s+=a[i][j];
        }
        b[z]=s;
        z++;
    }
    for(i=0;i<z;i++)
    c[i]=b[i];
    for(l=0;l<z;l++)
    {
        for(k=l+1;k<z;k++)
        {
            if(c[l]>c[k])
            {
                t=c[l];
                c[l]=c[k];
                c[k]=t;
            }
        }
    }
    for(d=0;d<n;d++)
    {
        for(i=0;i<z;i++)
        {
            for(j=0;j<l;j++)
            {
                if(c[i]==b[j])
                {
                    printf("%d ",a[d][j]);
                }
            }
        }printf("\n");
    }

}
