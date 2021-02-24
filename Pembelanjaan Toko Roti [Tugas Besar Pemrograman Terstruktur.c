// Tugas Besar Pemrograman Terstruktur
// Program Pembelajaan Toko Roti
// Nama : Divario Taufiq Adiyatma
// NIM : 3.34.20.0.09
// Kelas : IK-1A

#include <stdlib.h>
#include <stdio.h>

void garis();

int main ()
{
    int a, b, c, pilihan, beli, harga, total_1, total_2, total_3;
    int Pembelian[2] = {160201, 210221};
    char Roti, Snack, Minuman, pemilihan;
    int harga_1 = 10000;
    int harga_2 = 5000;
    int harga_3 = 3000;

    garis();
    printf("\t       Div Cake Bakery\n");
    printf("\tJalan Sapta Prasetys 1 No 10\n");

    garis();
    printf("| 1 |   Roti       | Aneka Roti                   | Rp 10.000\n");
    printf("| 2 |   Snack      | Aneka Jajanan Snack Ringan   | Rp  5.000\n");
    printf("| 3 |   Minuman    | Aneka Minuman                | Rp  3.000\n");
    garis();

    printf("\n\nApakah Anda ingin membeli aneka roti dan snack? Y / N = ");
    pemilihan= getche();
    if (toupper(pemilihan)== 'Y')
    {
        do
        {
        printf("\n\n1. Roti\n");
        printf("2. Snack\n") ;
        printf("3. Minuman\n") ;
        printf("Silahkan masukan pilihan Anda : ");
        scanf("%d",&pilihan);
        printf("Berapa banyak yang akan dibeli? : ");
        scanf("%d", &beli);


        if (pilihan == 1){
            printf ("Roti dengan harga Rp 10.000\n");
            total_1 = beli * harga_1;
            printf ("Total harga yang harus dibayar Rp %d ", total_1);
        }
        if (pilihan == 2){
            printf ("Snack dengan harga Rp 5.000\n");
            total_2 = beli * harga_2;
            printf ("Total harga yang harus dibayar Rp %d ", total_2);
        }
        if (pilihan == 3){
            printf ("Minuman dengan harga Rp 3.000\n");
            total_3 = beli * harga_3;
            printf ("Total harga yang harus dibayar Rp %d ", total_3);
        }

        if(pilihan !=1&& pilihan!=2 && pilihan !=3)
            printf("Anda tidak mengetik angka 1, 2 ataupun 3\n");
        } while (pilihan !=1&& pilihan!=2 && pilihan !=3);
        switch (pilihan)
        {
        case 1:
            printf("\n\n--------------------------------------------------------------------------------\n");
            printf("Pesanan Telah Dibeli \n\n");
            printf("--------------------------------------------------------------------------------\n");
            break;
        case 2:
            printf("\n\n--------------------------------------------------------------------------------\n");
            printf("Pesanan Telah Dibeli \n\n");
            printf("--------------------------------------------------------------------------------\n");
            break;
        case 3:
            printf("\n\n--------------------------------------------------------------------------------\n");
            printf("Pesanan Telah Dibeli\n\n");
            printf("--------------------------------------------------------------------------------\n");
            break;
        }
    }
    else
    {
        exit(0);
    }


    return 0;
}

void garis(){
    int i;
    for(i=0; i<52; i++)
        printf("-");
    printf("\n");
}

