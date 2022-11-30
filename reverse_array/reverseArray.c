#include <stdio.h>

int main() {

    int numbers[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int numbers_length = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 0; i < numbers_length / 2; i++) {
        int temp = numbers[numbers_length - (i + 1)];
        numbers[numbers_length - (i + 1)] = numbers[i];
        numbers[i] = temp;
    }

    // print array value
    for (int i = 0; i < numbers_length; i++) {
        printf("%d ", numbers[i]);
    }

    return 0;

    // pseudo-code for even numbers_length
    //  loop 1
    //  [10,2,3,4,5,6,7,8,9,1]
    //  loop 2
    //  [10,9,3,4,5,6,7,8,2,1]
    //  loop 3
    //  [10,9,8,4,5,6,7,3,2,1]
    //  loop 4
    //  [10,9,8,7,5,6,4,3,2,1]
    //  loop 5
    //  [10,9,8,7,6,5,4,3,2,1]

    // pseudo-code for even numbers_length
    //  loop 1
    //  [11,2,3,4,5,6,7,8,9,10,1]
    //  loop 2
    //  [11,10,3,4,5,6,7,8,9,2,1]
    //  loop 3
    //  [11,10,9,4,5,6,7,8,3,2,1]
    //  loop 4
    //  [11,10,9,8,5,6,7,4,3,2,1]
    //  loop 5
    //  [11,10,9,8,7,5,6,4,3,2,1]
}
