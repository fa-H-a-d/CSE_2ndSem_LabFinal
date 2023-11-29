#include <stdio.h>


int isPalindrome(int num, int originalNum) {
    if (originalNum == 0) {
        return num;
    }

    num = num * 10 + originalNum % 10;
    return isPalindrome(num, originalNum / 10);
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    int reversedNum = isPalindrome(0, n);

    if (n == reversedNum) {
        printf("Palindrome\n");
    } else {
        printf("Not a palindrome\n");
    }

    return 0;
}
