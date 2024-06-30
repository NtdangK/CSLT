#include<stdio.h>

int main(){
    int n;
    printf("Nhap n vao:");
    scanf("%d",&n);
    int a[1000];
    int i=0;
    do{
        a[i]=n%10;
        n=n/10;
        i++;
    }while(n);
    for (int j=0;j<i;j++){
        printf("%d",a[j]);
    }
    return 0;
}