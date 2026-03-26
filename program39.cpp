#include <stdio.h>

int main(){
    FILE *fp;

    fp = fopen("data.txt", "w");
    fprintf(fp, "Halo ini file pertama\n");

    fclose(fp);
    return 0;
}