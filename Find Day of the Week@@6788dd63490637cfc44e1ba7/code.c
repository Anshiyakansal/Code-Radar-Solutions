#include <stdio.h>
int main(){
    int a;
    printf("");
    scanf("%d", &a);
    switch(a){
        case 1:
            printf("Monday");
        case 2:
            printf("Tuesday");
        case 3:
            printf("Wednesday");
        case 4:
            printf("Thursday");
        case 5:
            printf("Friday");
        case 6:
            printf("Saturday");
        case 7:
            printf("Sunday"): 
        default:
            printf("Invalid");
    }
    // if (a==1){
    //     printf("Same Sign");
    // }
    // else {
    //     printf("Different Sign");
    // }
    return 0;
}