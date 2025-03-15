// Your code here...
#include <stdio.h>
#include <ctype.c>
int main(){
    char a;
    printf("");
    scanf("%c", &a);
    if (isupper(a)){
        printf("Uppercase");
    }
    else{
        printf("Lowercase");
    }
    return 0;
}