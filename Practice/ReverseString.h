#include <stdio.h>
#include <string.h>

void reverse(char *str, int start, int end)
{
    if (start >= end)
        return;
    else
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        reverse(str, start+1, end-1);
    }
}
int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int n = strlen(str);
    reverse(str, 0, n-1);
    printf("Reversed string: %s", str);
    return 0;
}
