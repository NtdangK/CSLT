#include<stdio.h>
#include<string.h>
int main(){
    char str[100], temp[100];
    fflush(stdin);
    gets(str);
    int n=strlen(str);
    for(int i=0;i<n;i++){
        if((str[i]<'a' || str[i]>'z') && (str[i]<'A' || str[i]>'Z')) str[i]=' ';
    }
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
    printf("%s",str);
    return 0;   
}