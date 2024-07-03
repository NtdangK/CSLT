#include<stdio.h>

int main(){
    int m, n;
    printf("Hay nhap so hang va so cot:");
    scanf("%d%d",&m,&n);
    int a[100][100], tran[10000], k=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("Nhap phan tu tai vi tri %d%d: ",i+1,j+1);
            scanf("%d",&a[i][j]);
            tran[k]=a[i][j];
            k++;
        }
    }
    for(int i=0;i<k;i++) printf("%d ",tran[i]);
    return 0;
}