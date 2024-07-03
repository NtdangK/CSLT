#include<stdio.h>
//Bài 5 đề thi hk1 2023-2024
int coDoiXungTam(int a[][20], int m, int n){
    int d=m-1;
    int c=n-1;
    for(int i=0;i<m/2;i++){
        for(int j=0;j<n;j++){
            if(a[i][j] != a[d-i][c-j]) return 0;    
        }
    }
    return 1;
}
int main(){
    int m,n;
    printf("Nhap vao so dong va so cot: ");
    scanf("%d%d",&m,&n);
    int a[20][20];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("Nhap phan tu a[%d][%d]: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    if(coDoiXungTam(a,m,n)) printf("Co doi xung tam.");
    else printf("Khong doi xung.");
    return 0;
}