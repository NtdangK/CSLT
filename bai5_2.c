#include<stdio.h>
#include<string.h>
//Hàm đếm tần suất các phần tử trong mảng (có thể dùng để tìm phần tử xuất hiện nhiều nhất, ít nhất)
void thongke(int a[], int n){
    int cnt[n]; //Mảng đánh dấu các phần tử
    for(int i=0;i<n;i++) cnt[i]=1;
    for(int i=0;i<n;i++){
        int dem=1;
        for(int j=i+1;j<n;j++) if(a[i]==a[j]){
            dem++;
            cnt[j]=0;// Đánh dấu các phần tử đã đếm
        }
        if(cnt[i]) cnt[i]=dem;//Gán giá trị đếm vào hàm đánh dấu
    }
    for(int i=0;i<n;i++){
        if(cnt[i]) printf("%d xuat hien %d lan\n",a[i],cnt[i]);
    }
}
int main(){
    int a[]={1,2,2,2,3,5,3,7,4,9,0};
    int n=sizeof(a)/sizeof(a[0]);
    thongke(a,n);
    return 0;
}