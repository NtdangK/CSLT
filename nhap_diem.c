#include<stdio.h>
//Bài 2 đề hk2 năm 2021-2022
int main(){
    int cnt[21]={0};
    float diemthi[21]={0};
    for(int i=1;i<=20;i++){
        diemthi[i]=diemthi[i-1]+0.5;
    }
    float n;
    while(1){
        printf("Nhap diem thi vao:");
        scanf("%f",&n);
        if(n<0 || n>10) break;
        int dem;
        for(int i=0;i<21;i++){
            if(diemthi[i]==n) dem=i;
        }
        cnt[dem]++;
    }
    for(int i=0;i<21;i++){
        printf("Diem thi %0.1f co %d em\n", diemthi[i], cnt[i]);
    }
    return 0;
}