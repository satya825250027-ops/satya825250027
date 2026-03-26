#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n>=100 && n<=999) printf("3 digit\n");
    else printf("Bukan\n");
    return 0;
}