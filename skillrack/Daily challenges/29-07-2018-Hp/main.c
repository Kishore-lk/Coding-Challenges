#include<stdio.h>
#include <stdlib.h>

int main()
{
    char a[100],b[100],c[100],first[100],second,s[100][100];
    scanf("%s %s %s",a,b,c);
    int l=strlen(a),i,j,k;
    for(i=0;i<l;i++)
    {
        if(a[i]==b[0]&&b[l-1]==c[i])
        {
            for(j=0;j<l;j++)
                s[j][0]=a[j];
            for(j=0;j<l;j++)
                s[i][j]=b[j];
            for(j=0;j<l;j++)
                s[j][l-1]=c[j];
                break;
        }
        if(a[i]==c[0]&&c[l-1]==b[i])
        {
            for(j=0;j<l;j++)
                s[j][0]=a[j];
            for(j=0;j<l;j++)
                s[i][j]=c[j];
            for(j=0;j<l;j++)
                s[j][l-1]=b[j];
                break;
        }
        if(b[i]==a[0]&&a[l-1]==c[i])
        {
            for(j=0;j<l;j++)
                s[j][0]=b[j];
            for(j=0;j<l;j++)
                s[i][j]=a[j];
            for(j=0;j<l;j++)
                s[j][l-1]=c[j];
                break;
        }
        if(b[i]==c[0]&&c[l-1]==a[i])
        {
            for(j=0;j<l;j++)
                s[j][0]=b[j];
            for(j=0;j<l;j++)
                s[i][j]=c[j];
            for(j=0;j<l;j++)
                s[j][l-1]=a[j];
                break;
        }
        if(c[i]==b[0]&&b[l-1]==a[i])
        {
            for(j=0;j<l;j++)
                s[j][0]=c[j];
            for(j=0;j<l;j++)
                s[i][j]=b[j];
            for(j=0;j<l;j++)
                s[j][l-1]=a[j];
                break;
        }
        if(c[i]==a[0]&&a[l-1]==b[i])
        {
            for(j=0;j<l;j++)
                s[j][0]=c[j];
            for(j=0;j<l;j++)
                s[i][j]=a[j];
            for(j=0;j<l;j++)
                s[j][l-1]=b[j];
                break;
        }
    }
   for(i=0;i<l;i++)
   {
       for(j=0;j<l;j++)
       {
           if(s[i][j]=='\0')
           printf("+");
           else
           printf("%c",s[i][j]);

       }
       printf("\n");
   }

}
