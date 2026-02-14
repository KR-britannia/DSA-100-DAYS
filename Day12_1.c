/*Given an m x n matrix, return true if the matrix is Toeplitz. Otherwise, return false.

A matrix is Toeplitz if every diagonal from top-left to bottom-right has the same elements.

 

Example 1:


Input: matrix = [[1,2,3,4],[5,1,2,3],[9,5,1,2]]
Output: true
Explanation:
In the above grid, the diagonals are:
"[9]", "[5, 5]", "[1, 1, 1]", "[2, 2, 2]", "[3, 3]", "[4]".
In each diagonal all elements are the same, so the answer is True.*/
#include <stdio.h>
#include <stdbool.h>

int main() {
    int rows, cols;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    printf("Enter matrix elements:\n");
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            scanf("%d", &matrix[i][j]);

    bool isToeplitz = true;

    for(int i = 1; i < rows; i++)
        for(int j = 1; j < cols; j++)
            if(matrix[i][j] != matrix[i-1][j-1])
                isToeplitz = false;

    if(isToeplitz)
        printf("Matrix is Toeplitz\n");
    else
        printf("Matrix is not Toeplitz\n");

    return 0;
}
