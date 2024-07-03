#include<stdio.h>
#include<math.h>
//Bài 1 đề hk1 năm 2021-2022
int main(){
    float x[100], y[100];
    float sum=0;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Nhap gia tri x[%d]: ",i);
        scanf("%f",&x[i]);
        printf("Nhap gia tri y[%d]: ",i);
        scanf("%f",&y[i]);
        
    }
    for(int i=0;i<n-1;i++){
        sum += sqrt((x[i+1]-x[i])*(x[i+1]-x[i]) + (y[i+1]-y[i])*(y[i+1]-y[i]));
    }
    printf("Tong khoang cach la: %.2f ",sum);
    return 0;
}