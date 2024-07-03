#include<stdio.h>

int main(){
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d",&n);
    int a[100];
    int max=0;
    for(int i=0;i<n;i++){
        printf("Nhap phan tu thu %d: ",i+1);
        scanf("%d",&a[i]);
    }
    for (int i=1;i<n-1;i++){
        int cuctri=0;
        if(a[i]>a[i-1] && a[i]>a[i+1]){
            cuctri=a[i];
        }
        if(cuctri>max) max=cuctri;
    }
    if(max) printf("Phan tu cuc dai lon nhat la: %d",max);
    else printf("Khong ton tai phan tu cuc dai lon nhat");
    return 0;
}