#include <stdio.h>

// Function to find the sum of digits using recursion
int sumOfDigits(int num) {
    if (num == 0) {
        return 0;
    }

    return (num % 10) + sumOfDigits(num / 10);
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    int result = sumOfDigits(n);

    printf("Sum of digits: %d\n", result);

    return 0;
}
