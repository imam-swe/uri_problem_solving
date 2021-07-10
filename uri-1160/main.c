#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, n, PA, PB;
    double G1, G2;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        j=0;
        scanf("%d %d %lf %lf", &PA, &PB, &G1, &G2);
        while(PA<=PB){
            PA = PA+((PA*G1)/100);
            PB = PB+((PB*G2)/100);
            j++;
            if(j>100){
                printf("Mais de 1 seculo.\n");
                break;
            }
        }

        if(j<=100)
            printf("%d anos.\n", j);
    }

    return 0;
}
