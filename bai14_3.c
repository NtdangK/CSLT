#include<stdio.h>
#include<string.h>

void intungchu(char str[]){
    int n=strlen(str);
    for(int i=0;i<n;i++){
        //In từng chữ khi gặp khoảng trắng thì xuống dòng
        if(str[i] != ' ') printf("%c",str[i]);
        else printf("\n");
    }
}
int main(){
    char str[100];
    gets(str);
    intungchu(str);
    return 0;
}