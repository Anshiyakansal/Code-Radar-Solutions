#include <stdio.h>
#include <stdlib.h>
int main(){
    int n = 10;
    int *p;
    if (n==10){
        int * m;
        m = (int *)malloc(sizeof(int));
        *m = 20;
        p = m;
    }
    printf("%d", *p);
    return 0;
}



