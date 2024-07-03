#include<stdio.h>
#include<string.h>
//Bài 3 đề thi hk1 2023-2024
void thongke(char s[]){
    //Hàm tính trung bình trọng số của 1 câu
    int n=strlen(s);
    int cnt[n];//mảng thống kê độ dài của từ
    for(int i=1;i<n;i++) cnt[i]=0;
    for(int i=0;i<n;i++){
        int length=0;
        int c=s[i]<'0' || s[i]>'9';
        if(s[i] != ' ' && c){
            //Đây là từ mới
            while(i<n && s[i] != ' ' && c){
                i++;
                length++;
            }
        }
        cnt[length]++;
    }
    int temp1=0, temp2=0;
    float result;
    for(int i=1;i<n;i++){
        if(cnt[i]){
            temp1+=i;
            temp2+=cnt[i]*i;
        }
    }
    result = (float)temp2/temp1;
    printf("Trung binh trong so la: %.2f",result);
}
int main(){
    char s[100];
    gets(s);
    thongke(s);
    return 0;
}