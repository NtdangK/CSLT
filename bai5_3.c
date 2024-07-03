#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Nhap chuoi vao: ");
    fflush(stdin);
    gets(str);
    char rep[100];
    int i=0;
    while(str[i] != '\0'){
        rep[i]=str[i];
        i++;
    }
    rep[i]='\0';
    printf("Chuoi sau khi sao chep la: %s\n",rep);
    printf("So ky tu duoc sao chep: %d",strlen(str));
    return 0;
}