#include <stdio.h>
int main(){
    int harga;
    scanf("%d",&harga);
    if(harga>100000) harga*=0.9;
    printf("Total: %d\n",harga);
    return 0;
}