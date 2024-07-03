#include<stdio.h>

int max(int a[],int n){
    int max=a[0];
    for(int i=0;i<n;i++){
        if(max<a[i]) max=a[i];
    }
    return max;
}
int main(){
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d",&n);
    int dem=0;
    int a[100], sub_a[100];
    for(int i=0;i<n;i++){
        printf("Nhap phan tu thu %d: ",i+1);
        scanf("%d",&a[i]);
    }
    for (int i=2;i<n-1;i++){
        if(a[i]>a[i-1] && a[i]>a[i+1]){
            sub_a[dem]=a[i];
            dem++;
        }
    }
    if(dem) printf("Phan tu cuc dai lon nhat la: %d",max(sub_a,dem));
    else printf("Khong ton tai phan tu cuc dai lon nhat");
    return 0;
}