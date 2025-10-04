#include <stdio.h>

int main(){
    int j1, m1, d1, j2, m2, d2;

    scanf("%d %d %d %d %d %d", &j1, &m1, &d1, &j2, &m2, &d2);

    int detik_rina = (j1 * 3600) + (m1 * 60) + d1;
    int detik_bestie = (j2 * 3600) + (m2 * 60) + d2;

    double hasil_detik;

    if (detik_rina < detik_bestie){
        hasil_detik = detik_rina + detik_bestie;
    }
    else if (detik_bestie < detik_rina){
        hasil_detik = detik_rina - detik_bestie;
    }
    else{
        hasil_detik = detik_rina * detik_bestie;
    }

    double hasil_menit = hasil_detik / 60.0;

    printf("%.2f\n", hasil_menit);

    return 0;
}