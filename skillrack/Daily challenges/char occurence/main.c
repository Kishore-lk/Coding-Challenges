#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[1000],c[26]="abcdefghijklmnopqrstuvwxyz";
    scanf("%[^\n]",s);
    int l=strlen(s),i,max=0,k=0,z,b[26]={0},f=0;
    for(i=0;i<l;i++)
    {
        if(s[i]!=' ')
            b[s[i]-'a']++;
    }
    z:
        for(i=0;i<26;i++)
        {
            if(max<b[i])
            {
                max=b[i];
                k=i;
            }
        }
        printf("%c",c[k]);
        b[k]=0;max=0;f=0;
        for(i=0;i<26;i++)
        {
            if(b[i]!=0)
                f=1;
        }
        if(f==1)
            goto z;

}
