#include <stdio.h>

// Mendefinisikan konstanta untuk ukuran array agar lebih rapi dan aman
#define MAX_SIZE 55

int main() {
    int total_cases;
    scanf("%d", &total_cases);

    // Loop utama untuk setiap kasus uji, dimulai dari 1
    for (int case_iterator = 1; case_iterator <= total_cases; case_iterator++) {
        int friend_count, room_count, sequence_length;
        scanf("%d %d %d", &friend_count, &room_count, &sequence_length);

        // Array 2D ini menyimpan preferensi saklar setiap teman.
        // friend_switches[i][j] = 1 berarti teman 'i' akan menekan saklar di kamar 'j'.
        int friend_switches[MAX_SIZE][MAX_SIZE];
        for (int i = 0; i < friend_count; i++) {
            for (int j = 0; j < room_count; j++) {
                scanf("%d", &friend_switches[i][j]);
            }
        }

        // Array ini menyimpan urutan teman yang masuk ke ruangan.
        int entry_sequence[MAX_SIZE];
        for (int i = 0; i < sequence_length; i++) {
            scanf("%d", &entry_sequence[i]);
        }

        // Array ini melacak status setiap lampu (0 untuk MATI, 1 untuk NYALA).
        // Semua lampu dimulai dalam keadaan MATI.
        int light_states[MAX_SIZE] = {0};

        // Memulai simulasi proses menekan saklar.
        for (int i = 0; i < sequence_length; i++) {
            // Dapatkan teman saat ini dari urutan.
            // Kurangi 1 karena nomor teman berbasis 1, sedangkan indeks array berbasis 0.
            int current_friend_index = entry_sequence[i] - 1;

            // Iterasi melalui semua kamar untuk melihat saklar mana yang ditekan teman ini.
            for (int j = 0; j < room_count; j++) {
                // Jika teman ini seharusnya menekan saklar di kamar ini...
                if (friend_switches[current_friend_index][j] == 1) {
                    // Ubah status lampu menggunakan bitwise XOR.
                    // Ini adalah cara efisien untuk mengubah 0 menjadi 1, dan 1 menjadi 0.
                    light_states[j] ^= 1;
                }
            }
        }

        // Cetak header output untuk kasus saat ini.
        printf("Case #%d:\n", case_iterator);

        // Tampilkan status akhir dari setiap lampu.
        for (int i = 0; i < room_count; i++) {
            if (light_states[i] == 1) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }
        }
    }

    return 0;
}
