#include <stdio.h>
int main(){
    int a;
    printf("");
    scanf("%d", &a);
    if (a==0){
        printf("Zero");
    }
    else if (a>0){
        printf("Positive");
    }
    else {
        printf("Negative");
    }
    return 0;
}