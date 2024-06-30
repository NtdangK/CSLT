#include<stdio.h>

int main(){
    int n;
    printf("Nhap gia tri vao:");
    scanf("%d",&n);
    if(n==0) return 0;
    int max,min;
    max=min=n;
    while(1){
        printf("Nhap gia tri vao:");
        scanf("%d",&n);
        if(n==0) break;
        if(max<n) max=n;
        if(min>n) min=n;
    }
    printf("Max la %d va Min la %d",max,min);
    return 0;
}