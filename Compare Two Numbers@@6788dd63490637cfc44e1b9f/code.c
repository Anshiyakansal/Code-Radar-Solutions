#include <stdio.h>
int main(){
    int a, b;
    printf("");
    scanf("%d", &a);
    if (a>b){
        printf("First");
    }
    else if (b>a){
        printf("Second");
    }
    else{
        printf("Equal");
    }
    return 0;
}