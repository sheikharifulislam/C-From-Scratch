#include <stdio.h>
#include <string.h>

void reversePrint(char *str, int length) {
    printf("%c", str[length - 1]);

    if (length == 1) {
        return;
    }

    return reversePrint(str, length - 1);
}

int main() {

    char *str = "abc def";
    int length = strlen(str);
    reversePrint(str, length);
    printf("\n");

    return 0;
}