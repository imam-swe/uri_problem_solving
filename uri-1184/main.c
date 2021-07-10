#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    float r=0.0, n;
    int i, j;
    scanf("%c", &a);

    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            scanf("%f", &n);
            if(i>j){
                r=r+n;
            }
        }
    }
    if(a=='S')
        printf("%.1f\n", r);
    else
        printf("%.1f\n", r/66);
    return 0;
}
