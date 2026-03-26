#include <stdio.h>

int genap(int n){
    return n%2==0;
}

int main(){
    if(genap(4)) printf("Genap\n");
}