#include <stdio.h>

int getLength(char str[]) {
    int i = 0;
    for (i; str[i] != '\0'; i++) {
    };

    return i;
}

int main() {
    char str[100];
    printf("Enter Your String: ");
    scanf("%[^\n]s", &str);
    int length = getLength(str);
    printf("Length of string: %d\n", length);

    return 0;
}