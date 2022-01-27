#include <stdio.h>
#include <stdlib.h>


// 13220035 - Senggani Fatah Sedayu
// Tugas minggu kedua mata kuliah EL2008 kelas 01
// Algoritman round robin

int main()
{
    int i,k = 0,l,m,smt,temp = 0,sum = 0, aktif = 0;
    int x = 0;
        printf("Masukkan banyak proses:\n");
        scanf("%d", &x);
    int ttime = -1,j = -1;
    int ekse[100];
    int datg[100];
    int urut[100];
    int prog[100];
    for (i = 0; i<x ; i++){
        printf("Masukkan waktu kedatangan P%d:\n", i);
        scanf("%d", &datg[i]);
        printf("Masukkan waktu eksekusi P%d:\n", i);
        scanf("%d", &ekse[i]);
        sum = sum + ekse[i];
    }
    while (ttime<sum) {
        ttime = ttime +1;
        for (l = 0; l<x ; l++){
            if (ttime==datg[l]){
                printf("%d      ", ttime);
                printf("P%d Masuk ke antrean.\n", l);
                urut[aktif]=l;
                prog[l]=0;
                aktif = aktif + 1;
            }
        }

        if ((ttime-temp)%100==0||ekse[urut[0]]==0){
            if(ekse[urut[0]]==0){
                temp = (ttime%100);
                prog[urut[0]]=1;
            }
            if (aktif>1){
                for (m = 0; m<aktif-1 ; m++){
                    smt=urut[m];
                    urut[m]=urut[m+1];
                    urut[m+1]=smt;
                }
            }
            if(ekse[urut[0]]==0){
                aktif = aktif - 1;
            }

                printf("%d      ", ttime);
                printf("P%d sedang diproses.\n", urut[0]);

        }

        ekse[urut[0]]=ekse[urut[0]]-1;
        for (l = 0; l<x ; l++){
            if (prog[l]==1){
                printf("%d      ", ttime);
                printf("P%d telah selesai diproses.\n", l);
                prog[l]=2;
            }
        }
    }
    printf("%d      ", ttime);
    printf("P%d telah selesai diproses.\n", urut[aktif]-1);
    return 0;
}
