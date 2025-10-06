#include <stdio.h>

int main(){
    int satu, dua, tiga; // 3 5 4
    scanf("%d %d %d", &satu, &dua, &tiga);

    int time1 = tiga - satu;
    int time2 = dua - tiga;

    if((time1 >= 0) && (time2 >= 0) && (time1 == time2)) {
        printf("%d\n", time1);
    }else{
        printf("-1\n");
    };

    return 0;
}