#include<stdio.h>

int main(){
    int n;
    printf("Nhap n vao:");
    scanf("%d",&n);
    int cnt=0, sum=0;
    while(n){
        sum=sum+n%10;
        n=n/10;
        cnt++;
    }
    printf("%d va %d",sum,cnt);
    return 0;
}