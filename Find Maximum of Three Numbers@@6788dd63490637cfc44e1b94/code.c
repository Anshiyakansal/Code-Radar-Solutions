// Your code here...
#include <stdio.h>
int main(){
    int a, b, c;
    printf("");
    scanf("%d %d %d", &a, &b, &c);
    if ((b>c) && (a<b)){
        printf("%b", b);
    }
    else if ((a>b) && (a>c)){
        printf("%d", a);
    }
    else{
        printf("%d", c);
    }
    return 0;
}