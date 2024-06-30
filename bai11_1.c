#include<stdio.h>

int check1(int a[], int n){
    for(int i=0;i<n-1;i++){
        if (a[i]!=a[i+1]) return 0;
    }
    return 1;
}
int tangDan(int a[], int n){
    for(int i=n-1;i>0;i--){
        if(a[i]>a[i-1]) return 0;
    }
    return 1;
}
int giamDan(int a[], int n){
     for(int i=n-1;i>0;i--){
        if(a[i]<a[i-1]) return 0;
    }
    return 1;
}
int main(){
    int n;
    printf("Nhap n vao:");
    scanf("%d",&n);
    int a[100],i=0;
    while(n){
        a[i]=n%10;
        n=n/10;
        i++;
    }
    if(check1(a,i)){
        printf("Khong tang khong giam");
    }else if(tangDan(a,i)){
        printf("So nguyen duong co cac chu so tang dan");
    }else if(giamDan(a,i)){
        printf("So nguyen duong co cac chu so giam dan");
    }else printf("Khong tang khong giam");
    return 0;
}