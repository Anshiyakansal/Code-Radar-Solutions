// Your code here...
#include <stdio.h>
#include <ctype.h>
int main(){
    char a;
    printf("");
    scanf("%c", &a);
    if (isdigit(a)){
        printf("Digit");
    }
    else if (ischar(a)){
        if ((a=='a') || (a=="i") || (a=="o") || (a=="u") || (a=="e") || (a=="A") || (a=="E") || (a=="O") || (a=="U") || (a=="I")){
            printf("Vowel");
        } 
        else{
            printf("Consonant");
        }
    }
    else{
        printf(Special Character);
    }
    return 0;
}