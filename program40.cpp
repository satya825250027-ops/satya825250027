#include <stdio.h>

int main(){
    int jam;
    int total;

    printf("Masukkan lama parkir (jam): ");
    scanf("%d", &jam);

    if(jam <= 1){
        total = 5000;
    } else {
        total = 5000 + (jam - 1) * 3000;
    }

    if(total > 25000){
        total = 25000;
    }

    printf("Total biaya parkir: Rp %d\n", total);

    return 0;
}