#include <stdio.h>
#include <string.h>

int main(){
    int t;
    scanf("%d", &t);
    getchar();

    for(int i = 1; i <= t; i++){
        char kataawal[155];
        char hapus[155];
        char katabersih[155];
        int indexBersih = 0;

        scanf("%[^\n]", kataawal);
        getchar();
        scanf("%[^\n]", hapus);
        getchar();

        for(int j = 0; j < strlen(kataawal); j++){
            int found = 0;
            for(int k = 0; k < strlen(hapus); k++){
                if(kataawal[j] == hapus[k]){
                    found = 1;
                    break; //stop cek
                }
            }
            if(found == 0){ //kalau ga sama, save
                katabersih[indexBersih] = kataawal[j];
                indexBersih++;
            }
        }

        katabersih[indexBersih] = '\0'; //terminate string

        printf("Case #%d: %s\n", i, katabersih);
    }

    return 0;
}

