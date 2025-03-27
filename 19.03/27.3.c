#include <stdio.h>
#include <stdlib.h>
int main(){
    int n = 10;
    int *p;
    if (n==10){
        int * m;
        m = (int *)malloc(sizeof(int));
        *m = 20;
        p = m;
    }
    printf("%d", *p);
    return 0;
}



#include <stdio.h>
int main (){
    int n, c, d, a[100], b[100];
    printf("Enter the number of elements in array\n");
    scanf("%d", &n);
    printf("Enter the array elements\n");
    for (c=0; c<n; c++){
        scanf("%d", &a[c]);
    }
    for (c=n-1, d=0; c>=0; c--, d++){
        b[d] = a[c];
    }
    for (c=0; c<n; c++){
        a[c] = b[c];
    }    
    printf("The array after reveing is\n");
    for (c=0; c<n; c++){
        printf("%d\n", a[c]);
    }
    return 0;
}



#include <stdio.h>
void selectionSort(int arr[], int n){
    int i, j, min, temp;
    for (i=0; i<n-1; i++){
        min = i;
        for (j=i+1; j<n; j++){
            if (arr[j]<arr[min]){
                min = j;
            }
        }
        if (min!=i){
            temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }
}
int main(){
    int arr[] = {2,6,3,5,1,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    for (int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
