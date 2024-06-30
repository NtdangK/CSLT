#include<stdio.h>
int a[100000];
int main(){
    int n;
    printf("Nhap so phan tu: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Nhap phan tu thu %d: ",i+1);
        scanf("%d",&a[i]);
    }
    int k;
    printf("Nhap so k vao: ");
    scanf("%d",&k);
    int i=0;
    do{
        //thêm k giá trị vào sau mảng nếu a[i]%k==0
        if(a[i] % k == 0){
            for(int j=0;j<k;j++){
                a[n]=a[i]/k;
                n++;
            }
        }
        i++;
        if(i==n) break;//Nếu i vượt hơn số phần tử trong mảng thì kết thúc
    }while(1);
    int sum=0;
    for(int i=0;i<n;i++){
        if(i!=n-1) printf("%d, ",a[i]);
        else printf("%d\n",a[i]);
        sum+=a[i];
    }
    printf("Tong cua cac phan tu cua mang sau khi duyet la: %d",sum);
    return 0;
}