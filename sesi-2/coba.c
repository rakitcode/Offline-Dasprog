#include <stdio.h>

int main() {
    float nilai;

    printf("Masukkan Nilai: \n");
    scanf("%f", &nilai);

    if (nilai >= 0 && nilai <= 100){
        if (nilai >= 86){
            printf("Nilai A");
        }
        else if (nilai >= 80){
            printf("Nilai AB");
        }
        else if (nilai >= 75){
            printf("Nilai B");
        }
        else if (nilai >= 60){
            printf("Nilai BC");
        }
        else if (nilai >= 68){
            printf("Nilai C");
        }
        else if (nilai >= 60){
            printf("Nilai D");
        }
        else {
            printf("Nilai E");
        }
    }
    else{
        printf("Perhatikan Input Nilai");
    }

    return 0;
}