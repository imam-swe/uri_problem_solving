#include <stdio.h>

int main()
{
    int n, t, i;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%d", &n);
        if(n%2==0)
            printf("0\n");
        else
            printf("1\n");
    }
    return 0;
}
