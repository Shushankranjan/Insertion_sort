#include <stdio.h>
void insertion_sort(int[],int);

int main()
{
    int i, n;
    printf("Enter size\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    insertion_sort(arr, n);
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

void insertion_sort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}