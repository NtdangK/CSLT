#include<stdio.h>

int main(){
    int phuThuoc[6]={};
    int i=1;
    while(1){
        int soNguoi;
        printf("Nhap vao so nguoi phu thuoc nhan vien %d: ",i);
        scanf("%d",&soNguoi);
        if(soNguoi<0 || soNguoi>5) break;
        phuThuoc[soNguoi]++;
        i++;
    }
    for (int i=0;i<6;i++){
        printf("%d nguoi phu thuoc co: %d nhan vien\n",i,phuThuoc[i]);
    }
    return 0;
}