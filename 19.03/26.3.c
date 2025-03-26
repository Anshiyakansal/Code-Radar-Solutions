#include <stdio.h>
void merge(int arr[], int left, int mid, int right){
    int i, j, k;
    int n1= mid-left+1;
    int n2= right - mid;
    int L[n1], R[n2];
    for (i=0; i<n1; i++)
        L[i] = arr[left+i];
    for (j=0; j<n2; j++)
        R[j] = arr[mid+1+j];
    i=0;
    j=0;
    k=left;
    while (i<n1 && j<n2){
        if (L[i]<=R[j]){
            arr[k++] = L[i++];
        }
        else {
            arr[k++] = R[j++];
        }
    }
    while (i<n1){
        arr[k++] = L[i++];
    }
    while (j<n2){
        arr[k++] = R[j++];
    }
}
void mergeSort(int arr[], int left, int right){
    if (left<right){
        int mid = left+(right-left)/2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid+1, right);
        merge(arr, left, mid, right);
    }
}
int main(){
    int arr[] = {38,27,43,3,9,82,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr, 0, n-1);
    printf("Sorted array\n");
    for (int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}




#include <stdio.h>
int linearSearch(int arr[], int n, int key){
    for (int i=0; i<n; i++){
        if (arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){
    int n, key;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the key to search: ");
    scanf("%d", &key);
    int result = linearSearch(arr, n, key);
    if (result!=-1){
        printf("Element found at index %d(position %d)\n", result, result +1);
    }
    else {
        printf("Element not found\n");
    }
    return 0;
}
