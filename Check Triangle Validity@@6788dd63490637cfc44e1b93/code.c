// Your code here...
#include <stdio.h>
int main(){
    int a, b, c;
    printf("");
    scanf("%d %d %d", &a, &b, &c);
    if ((a+b>c) && (a+c>b) && (b+c>a)){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
    return 0;
}