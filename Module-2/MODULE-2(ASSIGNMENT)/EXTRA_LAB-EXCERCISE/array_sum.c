/*Write a C program that takes N numbers from the user and stores them in an array. The 
program should then calculate and display the sum of all array elements.*/

#include <stdio.h>
#include <conio.h>

int main() 
{
    int n, i, sum = 0;

    printf("Enter the number of elements (N): ");
    scanf("%d", &n);

    int arr[n];  

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) 
	{
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];  
    }

    printf("Sum of all elements = %d\n", sum);

    return 0;
}

