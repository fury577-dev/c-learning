#include <stdio.h>

int main() {
    int marks[5][3];
    int i, j;

    // Input marks
    printf("Enter marks of 5 students in 3 subjects:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &marks[i][j]);
        }
    }

    // Find highest marks in each subject
    for (j = 0; j < 3; j++) {
        int max = marks[0][j];
        for (i = 1; i < 5; i++) {
            if (marks[i][j] > max)
                max = marks[i][j];
        }
        printf("Highest marks in Subject %d = %d\n", j + 1, max);
    }

    return 0;
}
