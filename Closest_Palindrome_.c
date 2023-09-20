#include <stdio.h>

// Function to check if a number is palindrome
int isPalindrome(int num) {
    int original = num, reversed = 0;
    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return original == reversed;
}

int main() {
    int N;
    scanf("%d", &N);

    // Find closest palindrome greater than N
    int greater = N + 1;
    while (!isPalindrome(greater)) {
        greater++;
    }

    // Find closest palindrome smaller than N
    int smaller = N - 1;
    while (!isPalindrome(smaller)) {
        smaller--;
    }

    // Calculate absolute differences
    int diff_greater = greater - N;
    int diff_smaller = N - smaller;

    // Print closest palindromes with minimum absolute difference
    if (diff_greater < diff_smaller) {
        printf("%d ", greater);
    } else if (diff_smaller < diff_greater) {
        printf("%d ", smaller);
    } else {
        printf("%d %d ", smaller, greater);
    }

    return 0;
}
