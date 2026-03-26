#include <stdio.h>
#include <string.h>

int main(){
    char a[50] = "Halo ";
    char b[50];
    printf("Masukkan nama: ");
    scanf("%s", b);
    strcat(a, b);
    printf("%s\n", a);
    return 0;
}