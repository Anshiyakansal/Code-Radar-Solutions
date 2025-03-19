#include <stdio.h>
void foo(int(*arr)[5])
{
    printf("%lu",sizeof(*arr));
}
int main()
{
    int arr[5];
    foo(&arr);
    return 0;
}
