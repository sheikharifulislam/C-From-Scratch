#include <stdio.h>

int main() {
    int grid[10][10];

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            grid[i][j] = 1;
        }
    }
    int n, r, c;
    char command;
    printf("Please enter the number of blocked cells: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Now Enter the %dth number block cells: ", i + 1);
        scanf("%d %d", &r, &c);
        if (grid[r][c] == 1) {
            grid[r][c] = 0;
        } else {
            printf("%d.%dth cell alredy blocked\n", r, c);
        }
    }

    printf("Please enter the initial position: ");
    scanf("%d %d", &r, &c);

    while (1) {
        printf("Travers Command: ");

        scanf("%c", &command);
        if (command == 'S') {
            break;
        } else if (command == 'U') {
            if (grid[r - 1][c] == 1) {
                r--;
            } else {
                printf("%d.%dth cell is blocked\n", r - 1, c);
            }
        } else if (command == 'D') {
            if (grid[r + 1][c] == 1) {
                r++;
            } else {
                printf("%d.%dth cell is blocked\n", r + 1, c);
            }
        } else if (command == 'L') {
            if (grid[r][c - 1] == 1) {
                c--;
            } else {
                printf("%d.%dth cell is blocked\n", r, c - 1);
            }
        } else if (command == 'R') {
            if (grid[r][c + 1] == 1) {
                c++;
            } else {
                printf("%d.%dth cell is blocked\n", r, c + 1);
            }
        } else if (command == 'C') {
            printf("Robot Current Position %d %d\n", r, c);
        }
    }

    return 0;
}