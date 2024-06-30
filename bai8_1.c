#include<stdio.h>

int main(){
    int n;
    printf("Nhap n vao:");
    scanf("%d",&n);
    int a[10000];
    int i=0;
    do{
        a[i]=n%2;
        n=n/2;
        i++;
    }while(n);
    for (int j=i-1;j>=0;j--){
        printf("%d",a[j]);
    }
    return 0;
}