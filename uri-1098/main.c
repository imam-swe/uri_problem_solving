#include <stdio.h>
#include <stdlib.h>

int main()
{
    float i, j;
    int k, l;
    for(i=0.0; i<2.1; i=i+0.2){
        for(j=1.0; j<=3.0; j=j+1.0){
            if(i>0.0 && i<1.0)
                printf("I=%0.1f J=%0.1f\n", i, j+i);
            else if(i>1.0 && i<2.0)
                printf("I=%0.1f J=%0.1f\n", i, j+i);
            else{
                k=i;
                l=i+j;
                printf("I=%d J=%d\n", k, l);
            }
        }
    }
    return 0;
}
