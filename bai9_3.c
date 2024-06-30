#include<stdio.h>
#include<string.h>

void printstring(char s[], int start, int end){
    for(int i=start;i<end;i++){
        printf("%c",s[i]);
    }
}
void smallestAndLagrest(char s[]){
    int j=0, max=0, point1, min=strlen(s), point2;
    for(int i=0;i<strlen(s);i++){
        char t[30];
        if(s[i] != ' '){
            //đây là từ mới;
            while(i<strlen(s) && s[i] != ' '){
                //Gán từ đó vào chuỗi mới
                t[j++]=s[i++];
            }
            t[j]='\0';
            j=0;
        }
        if(strlen(t)>max){
            max=strlen(t);
            point1=i-max;
        }
        if(strlen(t)<min){
            min=strlen(t);
            point2=i-min;
        }
    }
    printf("Tu dai nhat la: ");
    printstring(s,point1,max+point1);
    printf("\n");
    printf("Tu ngan nhat la: ");
    printstring(s,point2,min+point2);
}
int main(){
    char s1[100];
    gets(s1);
    smallestAndLagrest(s1);
    return 0;
}