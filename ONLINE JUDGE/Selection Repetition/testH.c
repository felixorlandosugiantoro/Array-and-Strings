#include <stdio.h>

int main(){

    int t;
    scanf("%d", &t);
    
    for(int i = 1; i <= t; i++){
        int banyakRumah;
        scanf("%d", &banyakRumah);

        int rumahA, rumahB;
        scanf("%d %d", &rumahA, &rumahB);

        int minimal = rumahB - rumahA;
        minimal = (minimal < 0) ? -minimal : minimal;

        for(int j = 3; j <= banyakRumah; j++){
            rumahA = rumahB;
            scanf("%d", &rumahB);

            int temp = rumahB - rumahA;
            temp = (temp < 0) ? -temp : temp;
            if(temp < minimal) minimal = temp;
        }
            printf("Case #%d: %d\n", i ,minimal);
    }


    return 0;
}

// #include <stdio.h>

// int main() {
//     int t;
//     scanf("%d", &t);

//     for (int i = 1; i <= t; i++) {
//         int n;
//         scanf("%d", &n);

//         long long prev_height;
//         long long current_height;
//         long long min_diff = 2000000000; 

//         scanf("%lld", &prev_height);

//         for (int j = 1; j < n; j++) {
//             scanf("%lld", &current_height);
            
//             long long diff = current_height - prev_height;
//             if (diff < 0) {
//                 diff = -diff;
//             }
––
//             if (diff < min_diff) {
//                 min_diff = diff;
//             }
            
//             prev_height = current_height;
//         }

//         printf("Case #%d: %lld\n", i, min_diff);
//     }

//     return 0;
// }