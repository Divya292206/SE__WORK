//: Implement the same program using a recursive function. (pascal)

#include <stdio.h>

// Recursive function 
int pascal(int n, int k) 
{
    if (k == 0 || k == n)
        return 1;
    else
        return pascal(n - 1, k - 1) + pascal(n - 1, k);
}

int main() 
{
    int n, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) 
	{
        for (j = 0; j <= i; j++) 
		{
            printf("%d ", pascal(i, j));
        }
        printf("\n");
    }

    return 0;
}

