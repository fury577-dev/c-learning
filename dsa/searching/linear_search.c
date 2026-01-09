#include <stdio.h>

int linearSearch(int a[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (a[i] == key)
            return i;
    }
    return -1;
}

int main() {
    int a[] = {10, 20, 30, 40, 50};
    int n = 5, key = 30;

    int index = linearSearch(a, n, key);

    if (index != -1)
        printf("Element found at index %d\n", index);
    else
        printf("Element not found\n");

    return 0;
}
