#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Nhap chuoi vao: ");
    fflush(stdin);
    gets(str);
    char rep[100]={'\0'};
    for(int i=0;i<strlen(str);i++){
        rep[i]=str[i];
    }
    printf("Chuoi sau khi sao chep la: %s\n",rep);
    printf("So ky tu duoc sao chep: %d",len(str));
    return 0;
}