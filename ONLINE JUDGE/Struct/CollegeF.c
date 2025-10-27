#include <stdio.h>
#include <string.h>

struct mhs {
    char Name[30];
    char NIM[30];
    char Age[30];
    char PostalCode[30];
    char PlaceOfBirth[101];
    char DateOfBirth[101];
    char HighSchool[101];
    char NumberofSiblings[30];
    char Height[1000];
    char BankAccountNumber[9];
    
};

int main() {
    
    int N;
    int i;
    
    scanf("%d", &N); getchar();
    
    struct mhs lia[10000];
    
    for (i = 0; i < N; i++) {

    scanf("%[^\n]s", lia[i].Name); getchar();
    scanf("%s", lia[i].NIM); getchar();
    scanf("%s", lia[i].Age); getchar();
    scanf("%s", lia[i].PostalCode);getchar();
    scanf("%s", lia[i].PlaceOfBirth);getchar();
    scanf("%s", lia[i].DateOfBirth);getchar();
    scanf("%[^\n]s", lia[i].HighSchool);getchar();
    scanf("%s", lia[i].NumberofSiblings);getchar();
    scanf("%s", lia[i].Height);getchar();
    scanf("%s", lia[i].BankAccountNumber);getchar();
    
    }
    
    for (i = 0; i < N; i++) {
    
    printf("Mahasiswa ke-%d:\n", i + 1);
    
    printf("Nama: %s\n", lia[i].Name);
    printf("NIM: %s\n", lia[i].NIM);
    printf("Umur: %s\n", lia[i].Age);
    printf("Kode Pos: %s\n", lia[i].PostalCode);
    printf("Tempat Lahir: %s\n", lia[i].PlaceOfBirth);
    printf("Tanggal Lahir: %s\n", lia[i].DateOfBirth);
    printf("Almamater SMA: %s\n", lia[i].HighSchool);
    printf("Jumlah Saudara Kandung:7 %s\n", lia[i].NumberofSiblings);
    printf("Tinggi Badan: %s\n", lia[i].Height);
    printf("NOMOR REKENING: %s\n", lia[i].BankAccountNumber);
    
    }
    
    return 0;
}