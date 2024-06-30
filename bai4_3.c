#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Nhap chuoi vao: ");
    fflush(stdin);
    gets(str);
    int n=strlen(str);
    int chu=0, so=0, kyTu=0;
    for(int i=0;i<n;i++){
        if(str[i] >= '0' && str[i] <= '9' ) so++;
        else if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z')) chu++;
        else kyTu++;
    }
    printf("So chu cai: %d\nSo chu so: %d\nSo ky tu dac biet: %d",chu,so,kyTu);
    return 0;
}