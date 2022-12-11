#include <stdio.h>

int find_min(int numbers[], int length) {
    int min = numbers[0];
    for (int i = 0; i < length; i++) {
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }

    return min;
}

int main() {

    int numbers[] = {1, 2, 3, 4, 5, -100, 6, 7, 8, 9, -1};
    int length = sizeof(numbers) / sizeof(numbers[0]);
    int result = find_min(numbers, length);
    printf("Min Number: %d\n", result);

    return 0;
}