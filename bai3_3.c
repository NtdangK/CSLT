#include<stdio.h>
#include<string.h>
int dem(char str[]){
    int dem=0;
    int n=strlen(str);
    for(int i=0;i<n;i++){
        int a,b;
        a=(str[i]>='A' && str[i]<='Z');
        b=(str[i]>='a' && str[i]<='z');
        if(str[i] != ' ' && (a||b)){
            //Đây là từ mới
            dem++;
            while(i<n && str[i] != ' ' && (a||b)) i++;//Bỏ qua từ đó
        }
    }
    return dem;
}
int main(){
    char str[100];
    printf("Nhap chuoi vao: ");
    fflush(stdin);
    gets(str);
    printf("Chuoi nay co %d tu",dem(str));
    return 0;
}