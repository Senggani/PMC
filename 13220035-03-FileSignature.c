#include <stdio.h>
#include <stdlib.h>

// 13220035 - Senggani Fatah Sedayu
// Tugas 3 - Membaca file signature dan cek apakah berupa .jpg, .pdf, atau bukan keduanya

int main()
{
    char name[100];
    char CC;
    FILE *myfile;
    char test[100];
    char cek[100];
    int retval, i, x=0;


    printf("Masukkan nama file:\n");
    scanf("%s", &name);
    myfile = fopen(name, "r");

        retval = fscanf(myfile, "%c", &CC);
    while (retval != EOF) {
        if (x<3){
            test[x]=CC;
            x = x + 1;
        }
        retval = fscanf(myfile, "%c", &CC);

    }

    for (i=0; i<3; i++){
        cek[i]=test[i];
    }

    if (test[0] == 'ÿ' && test[1] == 'Ø' && test[2] == 'ÿ'){
        printf("File berupa .jpg\n");
    }
    else if (test[0] == '%' && test[1] == 'P' && test[2] == 'D'){
        printf("File berupa .pdf\n");
    }
    else{
        printf("File bukan berupa .jpg atau .pdf\n");
    }
    return 0;
}
