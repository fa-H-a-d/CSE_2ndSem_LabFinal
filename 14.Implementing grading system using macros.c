#include <stdio.h>

#define A 90
#define B 80
#define C 70
#define D 60

#define GET_GRADE(score) \
    ((score) >= A) ? "A" : \
    ((score) >= B) ? "B" : \
    ((score) >= C) ? "C" : \
    ((score) >= D) ? "D" : "F"

int main() {
    int score;

    printf("Enter the student's score: ");
    scanf("%d", &score);

    printf("Grade: %s\n", GET_GRADE(score));

    return 0;
}
