#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Nhap chuoi vao: ");
    fflush(stdin);
    gets(str);
    for(int i=0;i<strlen(str);i++){
        if(str[i]>='A' && str[i]<='Z') str[i]+=32;
        else if(str[i]>='a' && str[i]<='z') str[i]-=32;
    }
    printf("Chuoi sau khi thay doi: %s",str);
    return 0;
}