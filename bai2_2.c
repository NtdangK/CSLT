#include<stdio.h>

float avg(int a[], int n){
    float avg=0;
    for(int i=0;i<n;i++){
        avg+=a[i];
    }
    return avg/n;
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
    int cnt=0;
    for(int i=0;i<n;i++){
        if(a[i]>avg(a,n)) cnt++;
    }
    printf("Trung binh la %.2f va co %d phan tu lon hon trung binh",avg(a,n),cnt);
    return 0;
}