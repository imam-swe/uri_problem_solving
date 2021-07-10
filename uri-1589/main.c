#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, x, y, i;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d %d", &x, &y);
        if(x>0 && y>0)
            printf("%d\n", x+y);
    }
    return 0;
}
