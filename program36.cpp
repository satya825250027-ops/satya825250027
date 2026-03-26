#include <stdio.h>
#include <string.h>

int main(){
    char a[50], b[50];
    scanf("%s %s", a, b);

    if(strcmp(a,b)==0)
        printf("Sama\n");
    else
        printf("Berbeda\n");

    return 0;
}