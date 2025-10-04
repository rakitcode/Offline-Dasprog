#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    
    int isPrima = 1;

    if (N <= 1){
        isPrima = 0;
    }
    else {
        for (int i = 2; i <= N / 2; i++){
            if (N % i == 0){
                isPrima = 0;
                break;
            }
        }
    }
    
    if (isPrima == 1){
        printf("Prima\n");
    }
    else{
        printf("Bukan Prima\n");
    }
    return 0;
}