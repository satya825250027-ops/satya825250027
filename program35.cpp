#include <stdio.h>
int main(){
    int rahasia = 7, tebakan;

    do{
        printf("Tebak angka: ");
        scanf("%d",&tebakan);

        if(tebakan > rahasia)
            printf("Terlalu besar\n");
        else if(tebakan < rahasia)
            printf("Terlalu kecil\n");

    } while(tebakan != rahasia);

    printf("Benar!\n");
}