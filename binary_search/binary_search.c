#include <stdio.h>

int binary_search(int numbers[], int length, int search_num) {
    int left_index = 0;
    int right_index = length - 1;
    int mid_index = left_index + right_index / 2;

    while (left_index < right_index) {
        if (numbers[mid_index] == search_num) {
            return mid_index;
        } else if (search_num > numbers[mid_index]) {
            left_index = left_index + 1;
        } else {
            right_index = right_index - 1;
        }
    }
}

int main() {
    int numbers[] = {-1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int length = sizeof(numbers) / sizeof(numbers[0]);
    int search_number;
    printf("Enter Your Search Number: ");
    scanf("%d", &search_number);
    int result = binary_search(numbers, length, search_number);
    printf("%d Found in position %d\n", search_number, result + 1);

    return 0;
}