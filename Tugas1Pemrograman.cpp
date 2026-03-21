#include <stdio.h>
#include <string.h>

int hitungBiaya(char jenis[], int jam)
{
    int tarifDasar = 5000;
    int total = 0;

    if (strcmp(jenis, "mobil") == 0)
    {
        total = tarifDasar * jam;
    }
    else if (strcmp(jenis, "motor") == 0)
    {
        total = (tarifDasar * jam) / 2;  
    }
    else if (strcmp(jenis, "truk") == 0)
    {
        total = tarifDasar * jam * 2;
    }

    if (jam > 5)
    {
        total = total - (total / 10);
    }

    return total;
}

int hitungTotal(int biaya[], int jumlah)
{
    int total = 0;
    int i;

    for (i = 0; i < jumlah; i++)
    {
        total = total + biaya[i];
    }

    return total;
}

void cetakStruk(char nama[], char jenis[][20], int jam[], int biaya[], int jumlah, int total)
{
    int i;

    printf("\n===== STRUK PEMBAYARAN PARKIR =====\n");
    printf("Nama Pelanggan : %s\n", nama);

    for (i = 0; i < jumlah; i++)
    {
        printf("\nKendaraan ke-%d\n", i + 1);
        printf("Jenis Kendaraan : %s\n", jenis[i]);
        printf("Lama Parkir     : %d jam\n", jam[i]);
        printf("Biaya Parkir    : Rp %d\n", biaya[i]);
    }

    printf("\nTotal Biaya Parkir : Rp %d\n", total);
    printf("====================================\n");
}

int main()
{
    char nama[20];
    int jumlah;
    char jenis[3][20];
    int jam[3];
    int biaya[3];
    int i;

    printf("Masukkan Nama Pelanggan: ");
    scanf("%s", nama);

    do
    {
        printf("Masukkan Jumlah Kendaraan (1-3): ");
        scanf("%d", &jumlah);

        if (jumlah < 1 || jumlah > 3)
        {
            printf("Jumlah kendaraan harus antara 1 sampai 3!\n");
        }

    } while (jumlah < 1 || jumlah > 3);

    for (i = 0; i < jumlah; i++)
    {
        printf("\nKendaraan ke-%d\n", i + 1);

        do
        {
            printf("Jenis Kendaraan (mobil/motor/truk): ");
            scanf("%s", jenis[i]);

            if (strcmp(jenis[i], "mobil") != 0 &&
                strcmp(jenis[i], "motor") != 0 &&
                strcmp(jenis[i], "truk") != 0)
            {
                printf("Input salah! Harus mobil, motor, atau truk.\n");
            }

        } while (strcmp(jenis[i], "mobil") != 0 &&
                 strcmp(jenis[i], "motor") != 0 &&
                 strcmp(jenis[i], "truk") != 0);

        do
        {
            printf("Lama Parkir (jam): ");
            scanf("%d", &jam[i]);

            if (jam[i] <= 0)
            {
                printf("Jam parkir harus lebih dari 0!\n");
            }

        } while (jam[i] <= 0);

        biaya[i] = hitungBiaya(jenis[i], jam[i]);
    }

    int total = hitungTotal(biaya, jumlah);

    cetakStruk(nama, jenis, jam, biaya, jumlah, total);

    return 0;
}