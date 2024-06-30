#include<stdio.h>
#include<string.h>
void max(int dem[], int n, int *max){
    for(int i=0;i<n;i++) if(*max<dem[i]) *max=dem[i];
}
int main(){
    char str[100];
    int dem[256]={0};//dùng mảng đếm 256 kí tự
    printf("Nhap chuoi vao: ");
    fflush(stdin);
    gets(str);
    for(int i=0;i<strlen(str);i++){
        //đếm các ký tự xuất hiện
        dem[str[i]]++;
    }
    int a=dem[0];
    max(dem,256,&a);
    for(int i=0;i<256;i++){
        if(a==dem[i]) printf("Ky tu '%c' xuat hien nhieu nhat: %d lan\n",i,dem[i]);
    }
    return 0;
}