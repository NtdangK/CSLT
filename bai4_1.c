#include<stdio.h>

int main(){
    while(1){
        int soLo, ngu, tam, oto;
        printf("Nhap so lo dat:");
        scanf("%d",&soLo);
        if(soLo==0) break;
        printf("Nhap so phong ngu:");
        scanf("%d",&ngu);
        printf("Nhap so phong tam:");
        scanf("%d",&tam);
        printf("Nhap so oto:");
        scanf("%d",&oto);
        int tong = 50000 + 17000*ngu + 12500*tam + 6000*oto;
        printf("Gia ngoi nha la: %d",tong);
    }
    return 0;
}