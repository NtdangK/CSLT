#include<stdio.h>

int prime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return 0;
    }
    return n>1;
}
int main(){
    int n;
    printf("Nhap so phan tu vao:");
    scanf("%d",&n);
    int a[100];
    for(int i=0;i<n;i++){
        printf("Nhap a[%d]:",i);
        scanf("%d",&a[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++){
        if(prime(a[i])) sum+=a[i];
    }
    printf("Tong cac so nguyen to cua mang:%d",sum);
    return 0;
}