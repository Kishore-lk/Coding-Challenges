#include<stdio.h>
#include <stdlib.h>

int main()
{
    char s[100000],t;
    scanf("%s",s);
    int l=strlen(s),i,j,k,c=0,n,m;
    for(k=0;k<l-1;k++)
    {
        n:
            if(s[k]=='c')
            {
            for(i=k;i<l-1;i++)
            {
                for(j=i+1;j<=i+1;j++)
                {
            if(s[i]==s[j]-1)
            {
                t=s[j];
                s[j]=s[i];
                s[i]=t;
                c++;
            }
          else if(s[i]==s[j]+1)
            {
                t=s[j];
                s[j]=s[i];
                s[i]=t;
                c++;
            }
            }
            }

           if(c>0)
            {
                c=0;
                goto n;
            }
            }
            m:
            c=0;
            for(i=0;i<=k;i++)
            {
                for(j=i+1;j<=i+1;j++)
                {
                    if(s[i]==s[j]+1)
                    {
                        t=s[j];
                        s[j]=s[i];
                        s[i]=t;
                        c++;
                    }
                }
            }
            if(c>0)
            goto m;
    }
    printf("%s",s);

}
