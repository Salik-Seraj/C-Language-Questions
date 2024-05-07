#include <stdio.h>

// write a cprogram to find the smallest number in an array of 10 integers.


int main()
{
    int arr[10];
    int i, smallest;

    // Get the array elements from the user
    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Initialize smallest with the first element
    smallest = arr[0];

    // Find the smallest element
    for (i = 1; i < 10; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    // Print the smallest number
    printf("The smallest number in the array is: %d\n", smallest);

    return 0;
}