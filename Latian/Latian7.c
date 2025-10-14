#include <stdio.h>

// Recursive function to solve the Tower of Hanoi puzzle
void towerOfHanoi(int n, char from, char to, char aux) {
    // Base case: If there is only one disk, move it directly
    if (n == 1) {
        printf("Move disk 1 from pillar %c to pillar %c\n", from, to);
        return;
    }

    // Step 1: Move n-1 disks from the source pillar to the auxiliary pillar
    towerOfHanoi(n - 1, from, aux, to);

    // Step 2: Move the largest disk from the source to the destination pillar
    printf("Move disk %d from pillar %c to pillar %c\n", n, from, to);

    // Step 3: Move the n-1 disks from the auxiliary pillar to the destination pillar
    towerOfHanoi(n - 1, aux, to, from);
}

int main() {
    int n = 4; // Number of disks
    printf("Steps to solve the Tower of Hanoi with %d disks:\n", n);
    towerOfHanoi(n, 'A', 'C', 'B'); // 'A' is source, 'C' is destination, 'B' is auxiliary
    return 0;
}