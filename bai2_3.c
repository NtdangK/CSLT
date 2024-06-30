#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Nhap chuoi vao: ");
    fflush(stdin);
    gets(str);
    int n=strlen(str);
    printf("Cac ky tu cua chuoi dao nguoc la:");
    for(int i=n-1;i>=0;i--){
        printf("%c",str[i]);
    }
    return 0;
}