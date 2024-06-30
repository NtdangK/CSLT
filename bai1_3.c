#include<stdio.h>

int doDai(char str[]){
    int i=0;
    while(str[i]){
        i++;
    }
    return i;
}
int main(){
    char str[100];
    printf("Nhap chuoi vao: ");
    fflush(stdin);
    gets(str);
    printf("Do dai cua chuoi nay la: %d",doDai(str));
    return 0;
}