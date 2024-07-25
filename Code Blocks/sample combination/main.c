#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j,temp;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=1;j<1<<n;j++)
    {
        temp=j;i=0;
        while(temp>0)
        {
            if(temp&1==1)
            {
                printf("%d ",a[i]);
            }
            i++;
            temp=temp>>1;
        }printf("\n");
    }
    return 0;
}
