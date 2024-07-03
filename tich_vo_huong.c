#include<stdio.h>
//Bài 3 đề hk2 năm 2021-2022
void input(float x[], int n){
    for(int i=0;i<n;i++){
        printf("Nhap toa do thu %d: ",i+1);
        scanf("%f",&x[i]);
    }
}
float tichvohuong(float x1[], float x2[], int n){
    float ketqua=0;
    for(int i=0;i<n;i++){
        ketqua+=x1[i]*x2[i];
    }
    return ketqua;
}
int main(){
    int n;
    float x1[100], x2[100];
    printf("Nhap do dai vao:");
    scanf("%d",&n);
    printf("Nhap vector dau tien\n");
    input(x1,n);
    printf("Nhap vector thu hai\n");
    input(x2,n);
    float ketqua=tichvohuong(x1,x2,n);
    printf("Tich vo huong cua 2 vector la: %.2f",ketqua);
    return 0;
}