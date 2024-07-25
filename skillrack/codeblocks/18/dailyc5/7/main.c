#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a[1000],b[1000],i,j,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d ",&a[i]);
    }
    for(j=1;j<n;j++)
    {
        scanf("%d ",&b[j]);
    }
    for(j=1;j<=n;j++)
    {
        for(i=1;i<=n;i++)
        {
            if(i==b[j])
            {
                for(k=i-1;k<n;k++)
                {
                    a[k]=a[k+1];

                }

            }
        }
    }
    printf("\n%d",a[1]);
    return 0;
}
