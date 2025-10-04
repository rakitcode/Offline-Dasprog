#include <stdio.h>

int main(){
    int jenisHari, usia;
    int harga = 0;

    scanf("%d", &jenisHari);
    scanf("%d", &usia);

    if (jenisHari == 1){
        if (usia >= 0 && usia <= 12){
            harga = 15000;
        }
        else if (usia > 12 && usia <= 60){
            harga = 25000;
        }
        else{
            harga = 20000;
        }
    }
    
    else{ 
        if (usia >= 0 && usia <= 12){
            harga = 20000;
        }
        else if (usia > 12 && usia <= 60){
            harga = 35000;
        }
        else{
            harga = 25000;
        }
    }

    printf("%d\n", harga);

    return 0;
}