#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,sum,s,c=0,f=0;
    scanf("%d",&n);
    int a[n],i,j,temp;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&sum);
    for(j=1;j<(1<<n);j++)
    {
        z:
        temp=j;i=0,s=0;
        while(temp>0)
        {
            if(temp&1==1)
            {
                s+=a[i];
                if(f==1)
                    printf("%d ",a[i]);
            }
            i++;
            temp=temp>>1;
        }
        if(s==sum&&f==0)
        {
            c++;
            f=1;
            goto z;
        }
        if(f==1)
        {
            f=0;
            printf("\n");
        }
    }
    printf("\n%d",c);
    return 0;
}
