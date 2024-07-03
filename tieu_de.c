#include<stdio.h>
#include<string.h>
int main(){
    char temp[100], str[100];
    printf("Nhap chuoi vao:");
    gets(str);
    int n=strlen(str);
    int j=0;
    for(int i=0;i<n;i++){
        if(str[i] != ' '){
            while(i<n && str[i]!=' '){
                temp[j++]=str[i++];
            }
            temp[j]=' ';
            j++;
        }
    }
    temp[j]='\0';
    strcpy(str,temp);
    for(int i=1;i<strlen(str);i++){
        if(str[i-1]==' ') str[i]-=32;
    }
    printf("Chuoi tieu de la: %s", str);
    return 0;
}