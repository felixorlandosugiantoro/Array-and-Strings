#include <stdio.h>

// Struktur untuk menyimpan state sebuah petak di BFS
typedef struct {
    int row;
    int col;
    int dist;
} State;

// Implementasi queue menggunakan array
State queue[64];
int head = 0;
int tail = 0;

void push(State s) {
    queue[tail++] = s;
}

State pop() {
    return queue[head++];
}

int is_empty() {
    return head == tail;
}

// Fungsi untuk cek apakah langkah valid (di dalam papan)
int is_valid(int r, int c) {
    return r >= 0 && r < 8 && c >= 0 && c < 8;
}

int solve() {
    char start_str[3], end_str[3];
    scanf("%s %s", start_str, end_str);

    // Ubah notasi catur ke indeks array (0-7)
    int start_row = start_str[1] - '1';
    int start_col = start_str[0] - 'A';
    int end_row = end_str[1] - '1';
    int end_col = end_str[0] - 'A';

    // 8 kemungkinan gerakan Kuda
    int dr[] = {-2, -2, -1, -1, 1, 1, 2, 2};
    int dc[] = {-1, 1, -2, 2, -2, 2, -1, 1};

    // Array untuk menandai petak yang sudah dikunjungi
    int visited[8][8] = {0};
    
    // Reset queue untuk setiap test case
    head = 0;
    tail = 0;

    // Mulai BFS
    State start = {start_row, start_col, 0};
    push(start);
    visited[start_row][start_col] = 1;

    while (!is_empty()) {
        State current = pop();

        // Jika tujuan tercapai, kembalikan jaraknya
        if (current.row == end_row && current.col == end_col) {
            return current.dist;
        }

        // Coba semua 8 kemungkinan langkah
        for (int i = 0; i < 8; i++) {
            int next_row = current.row + dr[i];
            int next_col = current.col + dc[i];

            if (is_valid(next_row, next_col) && !visited[next_row][next_col]) {
                visited[next_row][next_col] = 1;
                State next = {next_row, next_col, current.dist + 1};
                push(next);
            }
        }
    }
    
    return -1; // Seharusnya tidak pernah terjadi di papan catur
}

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 1; i <= T; i++) {
        int result = solve();
        printf("Case #%d: %d\n", i, result);
    }

    return 0;
}