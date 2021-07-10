#include <stdio.h>
#include <stdlib.h>
int main()
{
    char a[2];
    double s=0.0, n[12][12];
    int i, j, k;
    scanf("%d %s", &k, &a);
    for(i=0; i<12; i++)
        for(j=0; j<12; j++)
            scanf("%lf", &n[i][j]);
    for(i=0; i<12; i++)
        s+=n[i][k];
    if(a[0]=='S')
        printf("%.1lf\n", s);
    else if(a[0]=='M')
        printf("%.1lf\n", s/12.0);
    return 0;
}
