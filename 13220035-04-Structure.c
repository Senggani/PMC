#include <stdio.h>
#include <stdlib.h>

// Latiham 3            13220035
// Membuat structure berisi nama, nim, kehadiran, dan menampilkan nama dan nim dengan kehadiran dibawah 80%

int main()
{
    int jmlh, i;
    struct hdr {
        char nama[40];
        int nim;
        float hadir;
    };

    struct hdr mhs[100];

    printf("Banyak mahasiswa: \n");
    scanf("%d", &jmlh);

    for (i=0; i<jmlh; i++){
        printf("Masukkan nama mahasiswa ke-%d       : \n", (i+1));
        scanf("%s", &mhs[i].nama);
        printf("Masukkan nim mahasiswa ke-%d        : \n", (i+1));
        scanf("%d", &mhs[i].nim);
        printf("Masukkan kehadiran mahasiswa ke-%d  : \n", (i+1));
        scanf("%f", &mhs[i].hadir);
    }

    for (i=0; i<jmlh; i++){
        if (mhs[i].hadir < 80){
            printf("Mahasiswa %s dengan NIM %d memiliki kehadiran %0.2f. \n", mhs[i].nama, mhs[i].nim, mhs[i].hadir);
        }
    }
    return 0;
}
