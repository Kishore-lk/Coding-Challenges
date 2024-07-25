#include<stdio.h>
#include <stdlib.h>
int sub(int n,int a[n][n],int k)
{
    int i,j,l,m,z=0,b[10000],max,s;
    for(i=0;i<n-k+1;i++)
    {
        s=0;
        for(j=0;j<n-k+1;j++)
        {
            s=0;
            for(m=i;m<k+i;m++)
            {
                for(l=j;l<j+k;l++)
                {
                    s+=a[m][l];
                }
            }
            b[z]=s;
            z++;
        }
    }
    max=b[0];
    for(i=1;i<z;i++)
    {
        if(max<b[i])
        {
            max=b[i];
        }
    }
    return max;
}
int main()
{
    int n,i,j,k=2,max=0,b[10000],c[10000],x=0,l,m,z=0,s=0;
    scanf("%d\n",&n);
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(k=2;k<=n;k++)
    {
        max=sub(n,a,k);
    /*z=0;s=0;max=0;
    for(i=0;i<n-k+1;i++)
    {
        s=0;
        for(j=0;j<n-k+1;j++)
        {
            s=0;
            for(m=i;m<k+i;m++)
            {
                for(l=j;l<j+k;l++)
                {
                    s+=a[m][l];
                }
            }
            b[z]=s;
            z++;
        }
    }
    max=b[0];
    for(i=1;i<z;i++)
    {
        if(max<b[i])
        {
            max=b[i];
        }
    }*/
        c[x]=max;
        x++;
    }
    max=0;
    for(i=0;i<x;i++)
    {
        if(max<c[i])
        max=c[i];
    }
    printf("%d",max);

}
