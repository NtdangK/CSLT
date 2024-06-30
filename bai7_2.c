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
    int arr[] = {2, 3, 4, 5, 5, 4, 5, 6, 7, 8, 9, 0, 1, 2, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    dayCon(arr,n);
    return 0;
}