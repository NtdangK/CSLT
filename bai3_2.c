#include<stdio.h>

int main(){
    float bac[]={0.05, 0.1, 0.15};
    float muc[]={10, 15, 20};
    float thuNhap;
    printf("Nhap thu nhap ca nhan vao:");
    scanf("%f",&thuNhap);
    float thue=0;
    if (thuNhap<=10){
        printf("Mien thue");
    }else{
        for(int i=2;i>=0;i--){
            if(thuNhap>muc[i]){
                thue+=(thuNhap-muc[i])*bac[i];
                thuNhap=muc[i];
            }
        }
        printf("Thue phai dong la: %.2f",thue);
    }
    return 0;
}