#include<stdio.h>

int main(){
    int n;
    printf("Nhap cap cua ma tran: ");
    scanf("%d",&n);
    int a[20][20];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("Nhap phan tu a%d%d: ", i+1, j+1);
            scanf("%d",&a[i][j]);
        }
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) if(a[i][j]!=a[j][i]) cnt++;
    }
    if(cnt) printf("Khong doi xung");
    else printf("Doi xung");
    return 0;
}