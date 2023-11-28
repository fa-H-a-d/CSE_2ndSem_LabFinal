#include <stdio.h>

#define A_GRADE_THRESHOLD 90
#define B_GRADE_THRESHOLD 80
#define C_GRADE_THRESHOLD 70
#define D_GRADE_THRESHOLD 60

#define GRADE(percentage) \
    (percentage >= A_GRADE_THRESHOLD) ? 'A' : \
    (percentage >= B_GRADE_THRESHOLD) ? 'B' : \
    (percentage >= C_GRADE_THRESHOLD) ? 'C' : \
    (percentage >= D_GRADE_THRESHOLD) ? 'D' : 'F'

int main() {
    // Open input file
    FILE *inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Error opening input file.\n");
        return 1;
    }

    // Open output file
    FILE *outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        printf("Error opening output file.\n");
        fclose(inputFile);
        return 1;
    }

    // Read percentage from input file
    float percentage;
    fscanf(inputFile, "%f", &percentage);

    if (percentage < 0 || percentage > 100) {
        printf("Invalid percentage in input file. Please enter a percentage between 0 and 100.\n");
    } else {
        // Determine grade using the GRADE macro
        char grade = GRADE(percentage);

        // Print to console
        printf("Grade: %c\n", grade);

        // Print to output file
        fprintf(outputFile, "Grade: %c\n", grade);
    }

    // Close files
    fclose(inputFile);
    fclose(outputFile);

    return 0;
}