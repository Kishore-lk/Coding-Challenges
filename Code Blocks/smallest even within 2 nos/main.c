#include <stdio.h>
#include <string.h>
int main()
{
    char a[100],b[100],t,k;
    int i,j,z=0,f=0;
    scanf("%s%s",a,b);
    strcat(a,b);
    int n=strlen(a);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    if(a[n-1]=='2'||a[n-1]=='0'||a[n-1]=='4'||a[n-1]=='6'||a[n-1]=='8')
    {
        z=1;
    }
    if(z!=1)
    {
        if(a[0]=='0')
        {
            for(i=1;i<n;i++)
            {
                if(a[i]!='0')
                {
                    t=a[i];
                    a[0]=t;
                    f=n-i;
                    if(f>3)
                    a[i]='0';
                    break;
                }
            }
        }
    for(i=n-1;i>=0;i--)
    {
        if(a[i]=='2'||a[i]=='0'||a[i]=='4'||a[i]=='6'||a[i]=='8')
        {
            k=a[i];
            if(n>4)
            {
                for(j=i+1;j<n;j++)
                a[j-1]=a[j];
            }
            a[n-1]=k;
            z=1;
            break;
        }
    }
    }
    if(z==1)
    printf("%s",a);
    else
    printf("NO");
    return 0;
}
