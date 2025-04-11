#include <stdio.h>
#include <string.h>
int main() {
    char a[20];
    printf("enter a string");
    gets(a);
    printf("Output=%s", a);
    return 0;
}



#include <stdio.h>
#include <string.h>
int main(){
    char str[20];
    int len;
    printf("enter string\n");
    gets(str);
    len = strlen(str);
    printf("length of string is = %d\n", len);
    return 0;
}
