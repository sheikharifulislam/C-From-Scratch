#include <stdio.h>

int main() {
    int marks[4][40] = {
        {40, 50, 89, 30, 50, 45, 29, 56, 23, 56, 47, 84, 93, 26, 47, 56, 29, 83, 92, 93,
         29, 56, 29, 56, 92, 84, 59, 29, 45, 67, 34, 65, 74, 73, 82, 56, 96, 97, 98, 67},
        {56, 98, 84, 93, 83, 45, 29, 45, 90, 91, 45, 29, 65, 39, 93, 56, 74, 39, 48, 28,
         45, 67, 35, 28, 67, 34, 96, 43, 56, 34, 56, 97, 54, 42, 65, 85, 76, 94, 39, 67},
        {45, 76, 93, 43, 25, 78, 93, 34, 90, 78, 56, 83, 56, 93, 93, 56, 49, 40, 39, 59,
         20, 67, 87, 78, 34, 69, 30, 49, 89, 47, 89, 40, 74, 59, 37, 93, 89, 93, 45, 60},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    };

    for (int col = 0; col < 40; col++) {
        marks[3][col] = marks[0][col] / 4 + marks[1][col] / 4 + marks[2][col] / 2;
        printf("Roll NO: %d. Marks %d\n", col + 1, marks[3][col]);
    }

    return 0;
}