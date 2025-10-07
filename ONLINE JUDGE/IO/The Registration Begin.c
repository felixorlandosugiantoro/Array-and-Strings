#include <stdio.h>

int main() {

char idsiswa[15];
char namalengkap[101];
char kelassiswa;
int nomorkelas;
    scanf("%s", idsiswa);
    scanf(" %[^\n]", namalengkap);
    scanf(" %c %d", &kelassiswa, &nomorkelas);

    printf("Id    : %s\n", idsiswa);
    printf("Name  : %s\n", namalengkap);
    printf("Class : %c\n", kelassiswa);
    printf("Num   : %d\n", nomorkelas);

    return 0;
}