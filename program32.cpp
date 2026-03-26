#include <stdio.h>
int main(){
    int a,b,hasil=1;

    scanf("%d %d",&a,&b);

    for(int i=1;i<=b;i++)
        hasil*=a;

    printf("%d\n", hasil);
}