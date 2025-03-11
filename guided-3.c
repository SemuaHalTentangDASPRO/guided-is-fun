//Guided 3 untuk DasPro C

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> 

/*
[!!!!! WAJIB DIISI PLS !!!!!]
Nama
NPM
Kelas
*/

typedef char string[100]; 

int main() {
    string namaMahasiswa = ""; //Isi nama kalian disini 
    char programStudi[100];
    
    float ipkSemesterSebelumnya, ipkSemesterTerakhir, totalIpk = 0, meanIpk = 0;
    
    int semester;
    char jenisKelamin; 
    bool boolean;
    printf("\t=== [Input Data Mahasiswa] ===\n");
    printf("\nNama Mahasiswa : %s", namaMahasiswa);
    printf("\nProgram Studi : "); scanf(" %[^\n]", programStudi); // <-- Sebelumnya disini pakai fflush() dan getc() yang mana beresiko untuk memory overflow dan error yang tidak jelas

    printf("\nIPK Semester Sebelumnya: "); scanf("%f", &ipkSemesterSebelumnya);
    printf("\nIPK Semester Terakhir: "); scanf("%f", &ipkSemesterTerakhir);
    printf("\nSemester: "); scanf("%d", &semester);
    printf("\nJenis Kelamin (L/P): ");scanf(" %c", &jenisKelamin); // <-- Sebelumnya disini pakai scanf("%s") yang mana referensi nya tidak tepas, karena inisialisasi var jenisKelamin menggunakan char
    
    printf("\n\n\t=== [Tampil Data Mahasiswa] ===\n");
    printf("\nNama Mahasiswa : %s", namaMahasiswa);
    printf("\nProgram Studi : %s", programStudi);
    printf("\nIPK Semester Sebelumnya : %.2f", ipkSemesterSebelumnya);
    printf("\nIPK Semester Terakhir : %.2f", ipkSemesterTerakhir);

    printf("\nSemester Saat Ini : %d", semester);
    semester++; // Increment semester sehingga semester bertambah 1
    printf("\nSemester Setelah Diincrement: %d", semester);
    semester--; // Decrement semester sehingga semester berkurang 1
    printf("\nSemester Setelah Didecrement: %d", semester);
    printf("\nJenis Kelamin (L/P) : %c", jenisKelamin);

    printf("\n\n\t=== [Perbandingan IPK] ===\n");
    printf("\n1: Benar/True");
    printf("\n0: Salah/False\n");
    boolean = ipkSemesterSebelumnya == ipkSemesterTerakhir;
    printf("\nApakah IPK semester sebelumnya sama dengan IPK semester terakhir? %d", boolean);
    boolean = ipkSemesterSebelumnya != ipkSemesterTerakhir;
    printf("\nApakah IPK semester sebelumnya tidak sama dengan IPK semester terakhir? %d", boolean);
    boolean = ipkSemesterSebelumnya > ipkSemesterTerakhir;
    printf("\nApakah IPK semester sebelumnya lebih besar dari IPK semester terakhir? %d", boolean);
    boolean = ipkSemesterSebelumnya < ipkSemesterTerakhir;
    printf("\nApakah IPK semester sebelumnya lebih kecil dari IPK semester terakhir? %d", boolean);
    
    printf("\n\n\t=== [Tugas] ===\n");
    totalIpk = ipkSemesterSebelumnya + ipkSemesterTerakhir;
    meanIpk = totalIpk / 2;
    printf("\nTotal IPK : %.2f", totalIpk);
    printf("\nRata-rata IPK : %.2f", meanIpk);
    boolean = ipkSemesterSebelumnya == ipkSemesterTerakhir;
    printf("\nApakah IPK semester sebelumnya sama dengan IPK semester terakhir? %d", boolean);
    boolean = ipkSemesterSebelumnya != ipkSemesterTerakhir;
    printf("\nApakah IPK semester sebelumnya tidak sama dengan IPK semester terakhir? %d", boolean);
    boolean = ipkSemesterSebelumnya > ipkSemesterTerakhir;
    printf("\nApakah IPK semester sebelumnya lebih besar dari IPK semester terakhir? %d", boolean);
    boolean = ipkSemesterSebelumnya < ipkSemesterTerakhir;
    printf("\nApakah IPK semester sebelumnya lebih kecil dari IPK semester terakhir? %d", boolean);
    return 0;
}
