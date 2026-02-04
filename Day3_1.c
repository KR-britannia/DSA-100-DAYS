/*You are given an array arr[] of size n - 1 that contains distinct integers in the range from 1 to n (inclusive). This array represents a permutation of the integers from 1 to n with one element missing. Your task is to identify and return the missing element.

Examples:

Input: arr[] = [1, 2, 3, 5]
Output: 4
Explanation: All the numbers from 1 to 5 are present except 4.
Input: arr[] = [8, 2, 4, 5, 3, 7, 1]
Output: 6
Explanation: All the numbers from 1 to 8 are present except 6.
Input: arr[] = [1]
Output: 2
Explanation: Only 1 is present so the missing element is 2.*/
#include <stdio.h>

int missingNumber(int *arr, int n) {
    long long expected_sum = (long long)n * (n + 1) / 2;
    long long actual_sum = 0;

    
    for (int i = 0; i < n - 1; i++) {
        actual_sum += arr[i];
    }

    return (int)(expected_sum - actual_sum);
}

int main() {
    int n;

    printf("Enter value of n: ");
    scanf("%d", &n);

    int arr[n - 1];

    printf("Enter %d elements:\n", n - 1);
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
    }

    int result = missingNumber(arr, n);

    printf("Missing number is: %d\n", result);

    return 0;
}
