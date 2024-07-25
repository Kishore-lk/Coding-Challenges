#include<stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    int i,j=0,c[1000],b[1000],k,n=0,d[1000],m=0,x=0,e[1000];
    char s[1000];
    scanf("%s",s);
    int a=strlen(s);
    for(i=0;i<a;i++)
    {
            //printf("%c",s[i]);
            if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/' || s[i]=='^')
            {
                c[j]=s[i];
                j++;
                k++;
            }
            if(s[j]!='+' || s[j]!='-'||s[j]!='*'||s[j]!='/'||s[j]!='^')
                {
                   b[k]=s[i];
                   b[k]=b[k]-48;
                }
                e[x]=atoi(b);
                x++;
    }
    for(i=0;i<x;i++)
        printf("%d",e[i]);
  /* for(i=0;i<a;i=i++)
    {
        if(s[i+1]=='+')
        {
            d[n]=s[i]+s[i+2];
        }
        if(s[i+1]=='-')
        {
            d[n]=s[i]-s[i+2];
        }
        if(s[i+1]=='/')
        {
            d[n]=s[i]/s[i+2];
        }
        if(s[i+1]=='*')
        {
            d[n]=s[i]*s[i+2];
        }
        if(s[i+1]=='^')
        {
            d[n]=pow(s[i],s[i+2]);
        }
        m=m+d[n];
        n++;
    }
    printf("%d",m);*/
}
