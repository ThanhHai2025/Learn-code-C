#include <stdio.h>

#define ENTER 10

int main() {
    char c;
    int noDigits = 0, noLetters = 0, noOthers = 0;

    printf("Enter a string: ");

    while ((c = getchar()) != ENTER) {
        if (c >= '0' && c <= '9')
            noDigits++;
        else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
            noLetters++;
        else
            noOthers++;
    }

    printf("Digits: %d\n", noDigits);
    printf("Letters: %d\n", noLetters);
    printf("Other characters: %d\n", noOthers);

    return 0;
}
