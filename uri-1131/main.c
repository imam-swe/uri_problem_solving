#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, i=0, j=0, k=0, n=0;
    while(scanf("%d %d %d", &a, &b, &c)!=EOF){
        printf("Novo grenal (1-sim 2-nao)\n");
        ++n;
        if(a>b) i++;
        else if(a<b) j++;
        else k++;
        if(c==2) break;
    }
    printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n", n, i, j, k);
    if(i>j) printf("Inter venceu mais\n");
    else if(i<j) printf("Gremio venceu mais\n");
    else printf("Nao houve vencedor\n");
    return 0;
}
