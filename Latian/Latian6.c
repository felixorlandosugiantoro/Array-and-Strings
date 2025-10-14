#include <stdio.h>

// Function to input 10 numbers into an array
void inputNumbers(int arr[], int size) {
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < size; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

// Function to find the max value in an array
int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Function to find the min value in an array
int findMin(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

// Function to print out the numbers, max, and min value
void printResults(int arr[], int size, int max, int min) {
    printf("\n--- Results ---\n");
    
    printf("The 10 numbers are: ");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("\n");
    
    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);
}

int main() {
    int numbers[10];
    const int size = 10;
    
    inputNumbers(numbers, size);
    
    int maxValue = findMax(numbers, size);
    int minValue = findMin(numbers, size);
    
    printResults(numbers, size, maxValue, minValue);
    
    return 0;
}