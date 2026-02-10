/*Write a function that reverses a string. The input string is given as an array of characters s.

You must do this by modifying the input array in-place with O(1) extra memory.

 

Example 1:

Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]
Example 2:

Input: s = ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]*/
#include <stdio.h>

void reverseString(char* s, int sSize) {
    int left = 0;
    int right = sSize - 1;

    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }
}

int main() {
    int n;

    printf("Enter size of string: ");
    scanf("%d", &n);

    char s[n];

    printf("Enter %d characters:\n", n);
    for (int i = 0; i < n; i++) {
        scanf(" %c", &s[i]);   
    }

    reverseString(s, n);

    printf("Reversed string:\n");
    for (int i = 0; i < n; i++) {
        printf("%c ", s[i]);
    }

    return 0;
}
