#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int left = 0;
    int right;
    int isPalindrome = 1; // 1 = true (Asumsikan palindrome dulu)

    printf("Masukkan kata: ");
    scanf("%s", str);

    right = strlen(str) - 1; // Index terakhir

    while (left < right) {
        if (str[left] != str[right]) {
            isPalindrome = 0; // 0 = false (Bukan palindrome)
            break; // Stop pengecekan
        }
        left++;  // Geser ke kanan
        right--; // Geser ke kiri
    }

    if (isPalindrome == 1) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }

    return 0;
}