#include <stdio.h>
#include <string.h>

// Structure to store student information
struct Student {
    char name[50];
    int id;
    float cgpa;
};

// Function to perform bubble sort on an array of structures
void bubbleSort(struct Student arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Compare and swap if necessary based on cgpa
            if (arr[j].cgpa < arr[j + 1].cgpa) {
                struct Student temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    // Input student information
    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", students[i].name);

        printf("ID: ");
        scanf("%d", &students[i].id);

        printf("CGPA: ");
        scanf("%f", &students[i].cgpa);
    }

    // Perform bubble sort on the array of structures based on cgpa
    bubbleSort(students, n);

    // Output the sorted structure
    printf("\nSorted Student Information based on CGPA:\n");
    printf("ID\tName\tCGPA\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%s\t%.2f\n", students[i].id, students[i].name, students[i].cgpa);
    }

    return 0;
}
