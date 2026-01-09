#include <stdio.h>

void merge(int a[], int l, int mid, int h) {
    int i = l;
    int j = mid + 1;
    int k = l;
    int temp[100];

    while (i <= mid && j <= h) {
        if (a[i] <= a[j]) {
            temp[k] = a[i];
            i++;
        } else {
            temp[k] = a[j];
            j++;
        }
        k++;
    }

    while (i <= mid) {
        temp[k] = a[i];
        i++;
        k++;
    }

    while (j <= h) {
        temp[k] = a[j];
        j++;
        k++;
    }

    for (i = l; i <= h; i++) {
        a[i] = temp[i];
    }
}

void mergeSort(int a[], int l, int h) {
    if (l < h) {
        int mid = (l + h) / 2;
        mergeSort(a, l, mid);
        mergeSort(a, mid + 1, h);
        merge(a, l, mid, h);
    }
}

int main() {
    int a[] = {7, 6, 10, 5, 9, 2, 1, 15};
    int n = 8;

    mergeSort(a, 0, n - 1);

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
