#include<stdio.h>

void chuoiCon(char str[], int start, int end){
    for(int i=start;i<=end;i++) printf("%c",str[i]);
}
int main(){
    char str[100];
    printf("Nhap chuoi vao: ");
    fflush(stdin);
    gets(str);
    int a,b;
    printf("Nhap vi tri trich xuat va do dai chuoi con: ");
    scanf("%d%d",&a,&b);
    b+=a;
    printf("Chuoi con lay ra chuoi la: ");
    chuoiCon(str,a,b);
    return 0;
}