#include <stdio.h>

struct Mahasiswa{
    char nama[50];
    int umur;
};

int main(){
    struct Mahasiswa mhs;

    printf("Nama: ");
    scanf("%s", mhs.nama);
    printf("Umur: ");
    scanf("%d", &mhs.umur);

    printf("Nama: %s\n", mhs.nama);
    printf("Umur: %d\n", mhs.umur);

    return 0;
}