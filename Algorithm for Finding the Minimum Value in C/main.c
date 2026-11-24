// Algorithm for Finding the Minimum Value in C

#include <stdio.h>

int main()
{
    // Declare and initialize an integer array
    int arr[] = {-1, 2, -3, 4, -5, 6, -7, 8, -9, 10};

    // Calculate the total number of elements in the array
    // sizeof(arr) gives the total size of the array in bytes
    // sizeof(arr[0]) gives the size of one element in bytes
    int size = sizeof(arr) / sizeof(arr[0]);

    // Assume the first element is the minimum value initially
    int min = arr[0];

    // Iterate through the array to check every element
    for (int i = 0; i < size; i++)
    {
        // Compare the current element with the minimum value
        if (min > arr[i])
        {
            // Update min if the current element is smaller
            min = arr[i];
        }
    }

    // Display the smallest value found in the array
    printf("Minimum: %d\n", min);

    return 0; // Indicate that the program executed successfully
}
