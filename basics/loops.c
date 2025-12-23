#include <stdio.h>

int main() {
    int i;

    // for loop
    for (i = 1; i <= 5; i++) {
        printf("For loop: i = %d\n", i);
    }

    // while loop
    i = 1;
    while (i <= 5) {
        printf("While loop: i = %d\n", i);
        i++;
    }

    // do-while loop
    i = 1;
    do {
        printf("Do-while loop: i = %d\n", i);
        i++;
    } while (i <= 5);

    return 0;
}
