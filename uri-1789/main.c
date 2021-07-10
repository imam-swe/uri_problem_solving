#include <stdio.h>
int main()
{
    int i, n, x, a=0, b=0, c=0;
    while(scanf("%d", &n)!=EOF)
    {
        for(i=0; i<n; i++)
        {
            scanf("%d", &x);
            if(x<10)
                a++;
            else if(x>=10 && x<20)
                b++;
            else
                c++;
        }
        if(c>0)
            printf("3\n");
        else if(b>0)
            printf("2\n");
        else
            printf("1\n");
        a=0; b=0; c=0;
    }
    return 0;
}
