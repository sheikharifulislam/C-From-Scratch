#include <stdio.h>
#include <string.h>

void first_uppercase(char str[]) {
    if (str[0] >= 97 && str[0] <= 122) {
        str[0] = str[0] - 32;
    }
    for (int i = 1; i < strlen(str); i++) {
        if (str[i - 1] == 32) {
            if (str[i] >= 97 && str[i] <= 122) {
                str[i] = str[i] - 32;
            }
        }
    };
}

int main() {
    char str[100];
    printf("Enter Your Name: ");
    scanf("%[^\n]s", str);
    first_uppercase(str);
    printf("%s\n", str);
    return 0;
}