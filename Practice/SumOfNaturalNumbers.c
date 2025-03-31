#include <stdio.h>  
int sum(int n);
int sum(int n){
    if (n==0)
    return 0;
    else
    return (sum(n-1) + n);
}
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int s = sum(n);
    printf("Sum of %d natural numbers is: %d", n, s);
    return 0;
}
