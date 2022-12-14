#include <stdio.h>

int main() {
    char letters[] = {'a', 'b', 'c', 'd'};
    int length = sizeof(letters) / sizeof(letters[0]);

    for (int i = 0; i < length; i++) {

        if (letters[i] >= 97 && letters[i] <= 122) {
            letters[i] = letters[i] - 32;
        }
    }

    for (int i = 0; i < length; i++) {
        printf("%c", letters[i]);
    }

    return 0;
}