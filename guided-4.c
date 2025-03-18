#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

typedef char string[50];

int main(int argc, char *argv[]) {
    int menu, umur;
    string nama, jenisKelamin, username;
    string password, kategori, kategoriIndex;
    float berat, tinggi, indexMassaTubuh;

    printf("\t==[LOGIN]==\n");
    printf("\nUsername : "); fflush(stdin); gets(username);
    printf("\nPassword : "); fflush(stdin); gets(password);

    if(strcmp(username, "admin") == 0 && strcmp(password, "admin123") == 0){
        system("cls");

        printf("\t==[ RUMAH SAKIT ATMA JAYA ]==\n");
        printf("\n[1] Input Data Pasien");
        printf("\n[2] Klasifikasi BMI");
        printf("\n> "); scanf("%d", &menu);

        switch(menu){
            case 1:
                printf("\nMasukkan nama lengkap : "); fflush(stdin); gets(nama);
                printf("\nMasukkan umur : "); scanf("%d", &umur);
                printf("\nMasukkan jenis kelamin : "); fflush(stdin); gets(jenisKelamin);

                if(umur >= 0 && umur <= 5){
                    strcpy(kategori, "balita");
                }else if(umur >= 6 && umur <= 12){
                    strcpy(kategori, "anak-anak");
                }else if(umur >= 13 && umur <= 17){
                    strcpy(kategori, "remaja");
                }else if(umur >= 18 && umur <= 59){
                    strcpy(kategori, "dewasa");
                }else{
                    strcpy(kategori, "lansia");
                }

                // Menampilkan semua data yang telah diinputkan
                printf("\n\n\t=== Data Pasien ===\t");
                printf("\nNama           : %s", nama);
                printf("\nUmur           : %d", umur);
                printf("\nJenis Kelamin  : %s", jenisKelamin);
                printf("\nKategori       : %s", kategori);

                // Contoh: Nama Praktikan
                printf("\n\nNAMA PRAKTIKAN | NPM | KELAS");
                break;

            case 2:
                printf("\nMasukkan berat badan Anda (kg)   : "); scanf("%f", &berat);
                printf("\nMasukkan tinggi badan Anda (m)   : "); scanf("%f", &tinggi);

                // Perhitungan memakai rumus index massa tubuh
                indexMassaTubuh = berat / (tinggi * tinggi);

                // Kondisi untuk mengecek massa tubuh sesuai dengan ketentuan kategori
                if(indexMassaTubuh < 18.5){
                    strcpy(kategoriIndex, "Kurus");
                }else if(indexMassaTubuh >= 18.5 && indexMassaTubuh <= 24.9){
                    strcpy(kategoriIndex, "Normal");
                }else if(indexMassaTubuh >= 25.0 && indexMassaTubuh <= 29.9){
                    strcpy(kategoriIndex, "Overweight");
                }else{
                    strcpy(kategoriIndex, "Obesitas");
                }

                // Menampilkan output hasil perhitungan BMI
                printf("\n\t== Hasil Perhitungan BMI ==\n");
                printf("\nBMI Anda  : %.2f", indexMassaTubuh);
                printf("\nKategori  : %s", kategoriIndex);

                // Contoh: Nama Praktikan
                printf("\n\nNAMA PRAKTIKAN | NPM | KELAS");
                break;

            default:
                printf("\n[!] Menu tidak tersedia [!]\n");
                printf("\n\nNAMA PRAKTIKAN | NPM | KELAS");
                break;
        }
    }else{
        printf("\n[!] Username & Password Salah [!]\n\n");
        printf("NAMA PRAKTIKAN | NPM | KELAS\n");
    }

    return 0;
}
