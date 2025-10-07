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

