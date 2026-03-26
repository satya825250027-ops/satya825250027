#include <stdio.h>
#include <string.h>
int main(){
    char user[20], pass[20];
    scanf("%s %s",user,pass);
    if(strcmp(user,"admin")==0 && strcmp(pass,"123")==0)
        printf("Login berhasil\n");
    else
        printf("Login gagal\n");
    return 0;
}