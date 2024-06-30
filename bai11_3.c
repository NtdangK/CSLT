#include<stdio.h>
#include<string.h>

void demtu(char s1[], char s2[]){
    int m=strlen(s1), n=strlen(s2);
    int check=0;
    for (int i=0;i<=m-n;i++){
        int match=1;
        for(int j=0;j<n;j++){
            //Kiểm tra từng kí tự có giống nhau không
            int minus=s1[i+j]-s2[j];
            if(minus != 32 && minus !=-32 && minus !=0){
                //2 kí tự không khớp nhau cả in hoa lẫn in thường
                match=0;
                break;
            }
        }
        if(match) check++;
    }
    printf("'%s' xuat hien %d lan",s2,check);
}
int main(){
    char s1[100], s2[100];
    gets(s1);
    gets(s2);
    demtu(s1,s2);
    return 0;
}