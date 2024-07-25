#include<stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n,b[1000][26],c=0,d=0,f=0,k;
    char a[1000][1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s ",a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<strlen(a[i]);j++)
        {
            b[i][a[i][j]-'a']=1;
        }
    }
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        c=0;
        if(i!=j&&b[i][j]!=-1)
        {
            for(k=0;k<26;k++)
            {
                if(b[i][k]!=b[j][k])
                c=1;
            }
            if(c==0)
            {
                for(k=0;k<26;k++)
                b[j][k]=-10;
                d=1;
            }
        }

    }
}
for(i=0;i<n;i++)
{
   if(b[i][0]!=-10)
   f++;
}
printf("%d",f);

}
