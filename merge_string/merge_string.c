#include <stdio.h>

int main() {
    char str1[] = "Bangla";
    char str2[] = "Desh";
    char str3[17];
    int i, j = 0;
    for (i = 0, j = 0; i < 6; i++, j++) {
        str3[j] = str1[i];
    }
    for (i = 0; i < 4; i++, j++) {
        str3[j] = str2[i];
    }

    str3[j] = '\0';

    printf("%s\n", str3);

    return 0;
}