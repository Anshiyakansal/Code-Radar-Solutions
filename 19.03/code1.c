#include <stdio.h>
int main() 
{
    int numbers[] = {1, 2, 3, 4, 5};
    int *ptr = numbers;
    for (int i=0; i<5; i++){
        printf("element %d: %d\n", i, *(ptr+i));
    }
    return 0;
}
