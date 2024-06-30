#include<stdio.h>

int main(){
    do{
        int giaBan, giaMua, loiNhuan;
        printf("Nhap gia ban vao:");
        scanf("%d",&giaBan);
        if(giaBan==0) break;
        printf("Nhap gia mua vao:");
        scanf("%d",&giaMua);
        printf("Loi nhuan la: %d\n",giaBan-giaMua);

    }while(1);
    return 0;
}