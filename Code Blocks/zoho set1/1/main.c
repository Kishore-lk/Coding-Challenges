#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,b,a[100],n,c[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
        k=a[i];b=1;
        for(j=1;j<=k/2;j++)
        {
            if((k/j)==0)
            {
                b++;
            }
        }
        c[i]=b;
    }
    for(i=0;i<n;i++)
    printf("%d ",c[i]);
    return 0;
}
