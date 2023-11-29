#include <stdio.h>

// Function to find GCD using recursion
int findGCD(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return findGCD(b, a % b);
    }
}

// Function to find LCM
int findLCM(int num1, int num2) {
    // LCM * GCD = num1 * num2
    // LCM = (num1 * num2) / GCD
    return (num1 * num2) / findGCD(num1, num2);
}

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    if (num1 < 0 || num2 < 0) {
        printf("Please enter non-negative integers.\n");
    } else {
        int result = findLCM(num1, num2);
        printf("LCM of %d and %d is: %d\n", num1, num2, result);
    }

    return 0;
}
