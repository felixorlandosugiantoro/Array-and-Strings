#include <stdio.h>
#include <string.h>

struct mhs {
    char Name[101];
    char NIM[101];
    char Age[10];
    char PostalCode[7];
    char PlaceOfBirth[101];
    char DateOfBirth[101];
    char HighSchool[101];
    char NumberofSiblings[101];
    char Height[1001];
    char BankAccountNumber[10];
    
};

int main() {
    
    int N;
    int i;
    
    scanf("%d", &N); getchar();
    
    struct mhs lia[100];
    
    for (i = 0; i < N; i++) {


    scanf("%[^\n]s", lia[i].Name); getchar();
    scanf("%s", lia[i].NIM); getchar();
    scanf("%s", lia[i].Age); getchar();
    scanf("%s", lia[i].PostalCode); getchar();
    scanf("%s", lia[i].PlaceOfBirth); getchar();
    scanf("%s", lia[i].DateOfBirth); getchar();
    scanf("%[^\n]s", lia[i].HighSchool); getchar();
    scanf("%s", lia[i].NumberofSiblings); getchar();
    scanf("%s", lia[i].Height); getchar();
    scanf("%s", lia[i].BankAccountNumber); getchar();
    
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
    printf("Jumlah Saudara Kandung: %s\n", lia[i].NumberofSiblings);
    printf("Tinggi Badan: %s\n", lia[i].Height);
    printf("NOMOR REKENING: %s\n", lia[i].BankAccountNumber);
    
    }
    
    return 0;
}