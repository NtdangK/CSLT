#include<stdio.h>

void noichuoi(char s1[], char s2[]){
    int i=0, j=0;
    while(s1[i]!='\0') i++;
    s1[i]=' ';//Tạo khoảng trắng giữa 2 chuỗi
    i++;
    while(s2[j]!='\0'){
        //Gán chuỗi 2 vào chuỗi 1
        s1[i++]=s2[j++];
    }
    s1[i]='\0';
}
int main(){
    char s1[100],s2[100];
    gets(s1);
    gets(s2);
    noichuoi(s1,s2);
    printf("%s",s1);
    return 0;
}