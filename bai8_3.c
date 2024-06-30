#include<stdio.h>
#include<string.h>
int main(){
    char str[100], find[100];
    printf("Nhap chuoi vao: ");
    fflush(stdin);
    gets(str);
    printf("Nhap chuoi con can tim vao: ");
    fflush(stdin);
    gets(find);
    int check=0;
    for(int i=0;i<=strlen(str)-strlen(find);i++){
        check=0;
        for(int j=0;j<strlen(find);j++){
            if(str[i+j]!=find[j]){
                //Kiểm tra các kí tự liên tiếp có giống nhau không
                check=0;
                break;//tiếp tục kiểm tra vị trí i+1
            }
            check=1;
        }
        if (check) break;//gặp chuỗi con lần đầu thì dừng
    }
    if(check) printf("Ton tai chuoi con");
    else printf("Khong ton tai");
    return 0;
}