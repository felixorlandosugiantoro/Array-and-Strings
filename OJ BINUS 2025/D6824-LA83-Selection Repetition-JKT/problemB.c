#include <stdio.h>
//Case #1: ashiaappp
//CASE #2: aassshhiiiiappppp
int main(){
    int T,A,B,C,D,E,F;
    scanf("%d", &T);

    int t;
    for( t = 1; t <= T; t++) {
        scanf("%d %d %d %d %d %d", &A,&B,&C,&D,&E,&F);
        printf("Case #%d: ", t);
        for(int i = 0; i < A; i++) printf("a");
        for(int i = 0; i < B; i++) printf("s");
        for(int i = 0; i < C; i++) printf("h");
        for(int i = 0; i < D; i++) printf("i");
        for(int i = 0; i < E; i++) printf("a");
        for(int i = 0; i < F; i++) printf("p");
        printf("\n");
    }
    return 0;
}
