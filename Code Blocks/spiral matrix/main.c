#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int start=0,end=n-1,m[n][n],i,j,c=1;
    for(i=0;i<((n+1)/2);i++)
    {
        for(j=start;j<=end;j++)
            m[start][j]=c++;
        for(j=start+1;j<=end;j++)
            m[j][end]=c++;
        for(j=end-1;j>=start;j--)
            m[end][j]=c++;
        for(j=end-1;j>=start+1;j--)
            m[j][start]=c++;
        start++;
        end--;

    }
    if(n%2!=0)
        m[n/2][n/2]=--c;
    for(i=0;i<n;i++)
    {

        for(j=0;j<n;j++)
        {
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }
    return 0;
}
