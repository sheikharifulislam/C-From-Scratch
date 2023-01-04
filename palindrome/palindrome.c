#include <stdio.h>
#include <string.h>

int checkPalindrome(char word[]) {
    int length = strlen(word);
    printf("%d\n", length);
    for (int i = 0; i < length / 2; i++) {
        if (word[i] != word[length - (i + 1)]) {
            return 0;
        }
    }

    return 1;
}

int main() {
    char word[20];
    printf("Enter Your word: ");
    scanf("%s", word);
    int result = checkPalindrome(word);
    if (result) {
        printf("%s is palindrome\n", word);
    } else {
        printf("%s is not palindrome\n", word);
    }

    return 0;
}