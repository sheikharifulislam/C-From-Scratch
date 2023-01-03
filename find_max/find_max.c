#include <stdio.h>

int find_max(int numbers[], int length) {
    int max = 0;
    for (int i = 0; i < length; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }

    return max;
}

int main() {

    int numbers[] = {99, 1, -100, 2, 3, 402, 4, 5, 6, 7, 8, 9, 10};
    int numbers_length = sizeof(numbers) / sizeof(numbers[0]);
    int result = find_max(numbers, numbers_length);
    printf("Max Number: %d\n", result);

    return 0;
}