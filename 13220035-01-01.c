#include <stdio.h>
#include <stdlib.h>
// 13220035 - Senggani Fatah Sedayu
// Tugas minggu pertama mata kuliah EL2008 kelas 01
int main()
{
    int op;
    int limaL = 0;
    int tigaL = 0;
    printf(" 1. Isi penuh teko 3L \n 2. Isi penuh teko 5L \n 3. Kosongkan teko 3L \n 4. Kosongkan teko 5L \n 5. Tuang isi teko 3L ke teko 5L \n 6. Tuang isi teko 5L ke teko 3L \n");
    while (limaL != 4) {
        printf("Pilih operasi dengan mengetik angka: \n");
        scanf("%d", &op);
        int tmp3 = tigaL;
        int tmp5 = limaL;

        if (op == 1){
            tigaL = 3;
        }
        else if (op == 2){
            limaL = 5;
        }
        else if (op == 3){
            tigaL = 0;
        }
        else if (op == 4){
            limaL = 0;
        }
        else if (op == 5){
            if (limaL != 5 && tigaL != 0){
                tigaL = tmp3 - (3 - tmp5);
                limaL = tmp3 + tmp5;
                if (tigaL<0){
                    tigaL = 0;
                    limaL = limaL - tigaL;
                }
                if (limaL>5){
                    limaL = 5;
                    tigaL = tigaL + 3 - limaL;
                }
                if (limaL<5){
                    tigaL = 0;
                }
            }
        }
        else if (op == 6){
            if (limaL != 0 && tigaL != 3){
                limaL = tmp3 - (5 - tmp5);
                tigaL = tmp5 + tmp3;
                if (tigaL>3){
                    tigaL = 3;
                    limaL = limaL + 5 - tigaL;
                }
                if (limaL<0){
                    limaL = 0;
                    tigaL = tigaL - limaL;
                }
            }
        }
        printf(" Isi air pada teko 3L adalah %d \n", tigaL);
        printf(" Isi air pada teko 5L adalah %d \n \n", limaL);
    }
    printf("Teko sudah berisi 4 Liter. \n");
}
