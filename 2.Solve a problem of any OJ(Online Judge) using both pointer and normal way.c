// Source Code
// Normal approach :
#include <stdio.h>
int sumNormal(int num1, int num2) {
    return num1 + num2;
}
int main() {
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    int resultNormal = sumNormal(num1, num2);
    printf("Sum using normal approach: %d\n", resultNormal);
    return 0;
}


// Pointer Approach:
#include <stdio.h>
int sumWithPointers(int *num1, int *num2) {
    return (*num1) + (*num2);
}
int main() {
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    int result Pointers = sumWithPointers(&num1, &num2);
    printf("Sum using pointer approach: %d\n", resultPointers);
    return 0;
}