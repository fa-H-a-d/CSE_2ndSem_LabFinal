Source Code:

#include <stdio.h>

// Function to copy an array using pointers
void copyArray(int *source, int *destination, int size) {
    for (int i = 0; i < size; i++) {
        *(destination + i) = *(source + i);
    }
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Please enter a valid array size.\n");
        return 1;
    }

    int sourceArray[size];
    int destinationArray[size];

    printf("Enter the elements of the source array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &sourceArray[i]);
    }

    // Copy the array using the copyArray function
    copyArray(sourceArray, destinationArray, size);

    printf("Copied array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", destinationArray[i]);
    }

    return 0;
}
