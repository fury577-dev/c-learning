#include <stdio.h>

// swap function
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// partition using first element as pivot (as in your notes)
int partition(int a[], int lb, int ub) {
    int pivot = a[lb];
    int start = lb;
    int end = ub;

    while (start < end) {

        while (a[start] <= pivot) {
            start++;
        }

        while (a[end] > pivot) {
            end--;
        }

        if (start < end) {
            swap(&a[start], &a[end]);
        }
    }

    swap(&a[lb], &a[end]);
    return end;
}

// quick sort
void quickSort(int a[], int lb, int ub) {
    if (lb < ub) {
        int loc = partition(a, lb, ub);
        quickSort(a, lb, loc - 1);
        quickSort(a, loc + 1, ub);
    }
}

int main() {
    int a[] = {7, 6, 10, 5, 9, 2, 1, 15};
    int n = 8;

    quickSort(a, 0, n - 1);

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
