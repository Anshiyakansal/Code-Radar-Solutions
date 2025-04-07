#include <stdio.h>
int main() {
    int arr[3][3]= {{1,2,3}, {4,5,6}, {7,8,9}};
    int rows =3, cols=3, total_sum=0;
    for (int i=0; i<rows; i++){
        for (int j=0; j<cols; j++){
            total_sum += arr[i][j];
        }
    }
    printf("The sum of all elements is: %d", total_sum);
    return 0;
}



#include <stdio.h>
int main() {
    int arr[3][3]= {{1,2,3}, {4,5,6}, {7,8,9}};
    int rows =3, cols=3, total_sum=0;
    for (int i=0; i<rows; i++){
        for (int j=0; j<cols; j++){
            printf("Element at [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i=0; i<rows; i++){
        printf("\n");
        for (int j=0; j<cols; j++){
            printf("%d ", arr[i][j]);
        }
    }
    return 0;
}



