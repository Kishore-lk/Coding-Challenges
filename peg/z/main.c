#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct xx;
    {
        int a=3;
        char s[]="hello";

    };
    struct xx*s=malloc(sizeof(struct xx));
    printf("%d",s->a);
    printf("%s",s->s);
}
