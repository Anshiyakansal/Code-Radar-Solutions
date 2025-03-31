#include <stdio.h>
void print_subset(int arr[], int n, int index, int subset[])
{
    if (index == n)
    {
        printf("{ ");
        for (int i = 0; i < n; i++)
        {
            if (subset[i] == 1)
                printf("%d ", arr[i]);
        }
        printf("}\n");
    }
    else
    {
        subset[index] = 0;
        print_subset(arr, n, index+1, subset);
        subset[index] = 1;
        print_subset(arr, n, index+1, subset);
    }
}
int main()
{
    int n;
    printf("Enter the size of the set: ");
    scanf("%d", &n);
    int arr[n], subset[n];
    printf("Enter %d integers for the set:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Subsets:\n");
    print_subset(arr, n, 0, subset);
    return 0;
}
