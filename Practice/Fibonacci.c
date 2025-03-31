#include <stdio.h>  
void fibo(int n, int n1, int n2){
    if (n>0){
    int n3= n1+n2;
    printf("%d", n3);
    fibo(n-1, n2, n3);
    }
}
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Fibonacci series of %d elements is %d %d", n, 0, 1);
    fibo(n-2, 0, 1);
    return 0;
}
