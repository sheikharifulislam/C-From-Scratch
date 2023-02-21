#include <stdio.h>

int factorial(int number) {
    if (number == 1) {
        return 1;
    }

    return number * factorial(number - 1);
}

int main() {

    int number;

    printf("Enter Your Number: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Invalid Number\n");
        return 0;
    }

    printf("Factorial of %d is %d\n", number, factorial(number));

    return 0;
}