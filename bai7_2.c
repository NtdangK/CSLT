#include<stdio.h>

void dayCon(int a[], int n){
    int dem=1, start=0;
    printf("Day con 1: ");
    for(int i=0;i<n;i++){
        for(int j=start;j<i;j++){ //Xét các phần tử trước phần tử a[i]
            if(a[i]==a[j]){ //Có phần tử trùng với a[i] thì in mảng trước a[i] ra
                for(int k=start;k<i;k++) printf("%d ",a[k]);
                printf("\n");
                start=i; //Lặp lại quá trình trước ở a[i]
                dem++;
                printf("Day con %d: ",dem);
                break;
            }
        }
    }
    if(start<n) for(int k=start;k<n;k++) printf("%d ",a[k]);
}
int main(){
    int arr[100];
    int n;
    printf("Nhap so phan tu vao:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("arr[%d]:",i+1);
        scanf("%d",&arr[i]);
    }
    dayCon(arr,n);
    return 0;
}