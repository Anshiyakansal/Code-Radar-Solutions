#include <stdio.h>
int main(){
    int a, b, c;
    printf("");
    scanf("%d %d %d", &a, &b, &c);
    if (a=b=c){
        printf("Equilateral");
    }
    else if ((a!=b) && (a!=c) && (b==c)){
        printf("Isosceles");
    }
    // else if ((a!=b) && (a!=c) && (b!=c)){
    //     printf("Scalene");
    // }
    else{
        printf("Scalene");
    }
    return 0;
}