#include<stdio.h>

int prime(int n){
    for (int i=2;i*i<=n;i++){
        if(n%i==0) return 0;
    }
    return 1;
}
int main(){
    int n;
    printf("Nhap n vao:");
    scanf("%d",&n);
    int a[100];
    int j = 0, temp=n;
    for (int i = 2;i<=temp/2;i++){
        while(prime(i) && n%i==0){
            n=n/i;
            a[j]=i;
            j++;
        }
    }
    for (int i=0;i<j;i++){
        printf("%d",a[i]);
        if (i!=j-1) printf("*");
    }
    return 0;
}