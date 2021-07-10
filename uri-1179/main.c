#include <stdio.h>
int main()
{
    int i, l, j=0, k=0, n, a[5], b[5];
    for(i=0; i<15; i++)
    {
        scanf("%d", &n);
        if(n%2==0)
        {
            a[j]=n;
            j++;
            if(j==5)
            {
                for(l=0; l<5; l++)
                {
                    printf("par[%d] = %d\n", l, a[l]);
                    a[l]=0;
                }
                j=0;
            }
        }
        else
        {
            b[k]=n;
            k++;
            if(k==5)
            {
                for(l=0; l<5; l++)
                {
                    printf("impar[%d] = %d\n", l, b[l]);
                    b[l]=0;
                }
                k=0;
            }
        }
    }

    for(i=0; i<5; i++)
    {
        if(b[i]==0)
            break;
        printf("impar[%d] = %d\n", i, b[i]);
    }

    for(i=0; i<5; i++)
    {
        if(a[i]==0)
            break;
        printf("par[%d] = %d\n", i, a[i]);
    }

    return 0;
}
