#include <stdio.h>
#include <string.h>

void encrypt(char str[], int salt) {
    int strLength = strlen(str);
    for (int i = 0; i < salt; i++) {
        for (int j = 0; j < strLength; j++) {
            if (str[j] <= 32) {
                continue;
            } else {
                str[j] = str[j] - 1;
            }
        }
    }
}

void decrypt(char str[], int salt) {
    int strLength = strlen(str);
    for (int i = 0; i < salt; i++) {
        for (int j = 0; j < strLength; j++) {
            if (str[j] <= 32) {
                continue;
            } else {
                str[j] = str[j] + 1;
            }
        }
    }
}

int main() {
    char str[100];
    printf("Enter Your String: ");
    scanf("%[^\n]", str);

    // encrypt funcation call
    encrypt(str, 4);
    printf("%s\n", str);

    // decrypt funcation call
    decrypt(str, 4);
    printf("%s\n", str);

    return 0;
}