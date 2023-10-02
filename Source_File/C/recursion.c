#include <stdio.h>

// Define a recursive function to calculate factorial
int factorial(int n) {
    // Base case: If n is 0 or 1, return 1
    if (n == 0 || n == 1) {
        return 1;
    }
    // Recursive case: Calculate factorial of (n-1) and multiply it by n
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    int number = 5;
    int result = factorial(number);
    printf("%d! = %d\n", number, result);
    return 0;
}