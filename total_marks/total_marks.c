#include <stdio.h>

int main() {

    int ft_marks[40] = {40, 50, 89, 30, 50, 45, 29, 56, 23, 56, 47, 84, 93, 26, 47, 56, 29, 83, 92, 93,
                        29, 56, 29, 56, 92, 84, 59, 29, 45, 67, 34, 65, 74, 73, 82, 56, 96, 97, 98, 67};
    int st_marks[40] = {56, 98, 84, 93, 83, 45, 29, 45, 90, 91, 45, 29, 65, 39, 93, 56, 74, 39, 48, 28,
                        45, 67, 35, 28, 67, 34, 96, 43, 56, 34, 56, 97, 54, 42, 65, 85, 76, 94, 39, 67};
    int final_marks[40] = {45, 76, 93, 43, 25, 78, 93, 34, 90, 78, 56, 83, 56, 93, 93, 56, 49, 40, 39, 59,
                           20, 67, 87, 78, 34, 69, 30, 49, 89, 47, 89, 40, 74, 59, 37, 93, 89, 93, 45, 60};
    int total_marks[40];
    int marks_count[101];
    int i, j;

    for (i = 0; i < 40; i++) {
        total_marks[i] = ft_marks[i] / 4.0 + st_marks[i] / 4.0 + final_marks[i] / 2.0;
    }

    for (j = 0; j < 40; j++) {
        printf("Roll NO: %d\t Total Marks: %.d\n", j + 1, total_marks[j]);
    }

    for (i = 0; i <= 100; i++) {
        marks_count[i] = 0;
    }

    for (i = 0; i < 40; i++) {
        int mark = total_marks[i];
        marks_count[mark]++;
    }

    printf("\n");

    for (int mark = 20; mark <= 100; mark++) {
        if (marks_count[mark] >= 1) {
            printf("Mark: %d\t Count: %d\n", mark, marks_count[mark]);
        }
    }

    return 0;
}
