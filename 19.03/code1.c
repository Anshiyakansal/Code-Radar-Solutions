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
#include <stdio.h>
int main()
{
    int a=10,b=20,c=30;
    int*ptr[3];
    ptr[0]=&a;
    ptr[1]=&b;
    ptr[2]=&c;
    printf("%d %d %d\n",*ptr[0],*ptr[1],*ptr[2]);
    return 0;
}
#include <stdio.h>
int main()
{
    int*p;
    int val[7]={11,22,33,44,55,66,77};
    p=&val[0];
    for(int i=0;i<7;i++)
    {
        printf("val[%d]: value is %d and address is %p\n",i,*p,p);
        p++;
    }
    return 0;
}
