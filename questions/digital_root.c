#include <stdio.h>
#include <string.h>

int recursive_sum(char a[]);   // function declaration

int main() {
    char a[1000];

    scanf("%s", a);

    int root = recursive_sum(a);
    printf("Digital Root: %d", root);

    return 0;
}

int recursive_sum(char a[]) {
    int i, sum = 0;
    int len = strlen(a);

    // base case: single digit
    if (len == 1) {
        return a[0] - '0';
    }

    // sum digits
    for (i = 0; i < len; i++) {
        sum += a[i] - '0';
    }

    // convert sum to string
    char next[20];
    sprintf(next, "%d", sum);

    return recursive_sum(next);
}
