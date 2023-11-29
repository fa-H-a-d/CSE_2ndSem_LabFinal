#include <stdio.h>

// Function to calculate the nth Fibonacci term using recursion
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Please enter a non-negative integer.\n");
    } else {
        int result = fibonacci(n);
        printf("The %dth Fibonacci term is: %d\n", n, result);
    }

    return 0;
}
