#include<stdio.h>
void dayCon(int a[], int start, int end){
    //in các phần tử từ start đến end
    for(int i=start;i<=end;i++){
        if(i!=end) printf("%d, ",a[i]);
        else printf("%d",a[i]);
    }
    printf("\n");
}
int main(){
    int n;
    printf("Nhap vao so phan tu: ");
    scanf("%d",&n);
    int a[100];
    for(int i=0;i<n;i++){
        printf("Nhap phan tu %d:",i+1);
        scanf("%d",&a[i]);
    }
    int start=0,tam=0;
    for(int i=0;i<n;i++){
        if(a[i]>a[i+1]){
            //Nếu phần tử sau nhỏ hơn thì dùng hàm in ra các số trước
            tam++;
            printf("Day con %d: ",tam); 
            dayCon(a,start,i);
            start=i+1;// Thực hiện vòng lặp từ i+1
        }
    }
    printf("Day con %d: ",tam+1);
    dayCon(a,start,n-1);
    return 0;
}