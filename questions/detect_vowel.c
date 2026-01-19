#include <stdio.h>
#include <string.h>

int main() {
    char arr[100];
    int count = 0;

    // Take input
    scanf("%s", arr);

    // Traverse string
    for(int i = 0; arr[i] != '\0'; i++) {
        if(strchr("aeiouAEIOU", arr[i]) != NULL) {
            count++;
        }
    }

    if(count > 0)
        printf("Vowel found : %d",count);
    else
        printf("No vowels found");

    return 0;
}
