#include <stdio.h>
#include <string.h>

int main() {
    // Read
    int t;
    scanf("%d", &t);

    // Loop through each test case
    for (int i = 1; i <= t; i++) {
        // --- Semua logika sekarang ada di dalam sini ---

        // A char array to store the username
        char username[100005];
        scanf("%s", username);

        // An array to keep track of which characters have been seen ('a' to 'z')
        int seen_chars[26] = {0};
        int distinct_count = 0;

        // Get the length of the input string
        int len = strlen(username);

        // Loop through each character of the username
        for (int j = 0; j < len; j++) {
            // Calculate the index for the character (e.g., 'a' -> 0, 'b' -> 1)
            int index = username[j] - 'a';
            
            
            if (seen_chars[index] == 0) {
                seen_chars[index] = 1; // Mark as seen
                distinct_count++;
            }
        }

        // Print the case number
        printf("Case #%d: ", i);

        // Check if the number of distinct characters is even or odd
        if (distinct_count % 2 == 0) {
            printf("Yay\n"); // Even count -> Female
        } else {
            printf("Ewwww\n"); // Odd count -> Male
        }
    }

    return 0;
}

