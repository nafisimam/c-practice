// Online C compiler to run C program online
#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int x) {
    if (x < 0) {
        return false;
    }
    
    int reverse = 0;
    int original = x;
    
    // Reverse the number
    while (x != 0) {
        int lastDigit = x % 10;
        printf("Last Digit %d\n", lastDigit);
        reverse = reverse * 10 + lastDigit;
        printf("Reversing: %d\n", reverse);
        x = x / 10;
        printf("x is now %d\n", x);
    }
    
    // Check if the reversed number is equal to the original
    return reverse == original;
}

int main() {
    // Write C code here
    isPalindrome(123456);
    

    return 0;
}
