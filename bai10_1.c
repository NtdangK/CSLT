#include<stdio.h>
#include<math.h>
//Bài 10: tính sigma n!

// long long tinh(int n){
//     int temp=1;
//     for (int i=1;i<=n;i++){
//         temp=temp*i;
//     }
//     if (n==1) return 1;
//     return temp+tinh(n-1);
// }
// int main(){
//     int n;
//     printf("Nhap n vao:");
//     scanf("%d",&n);
//     printf("%lld",tinh(n));
//     return 0;
// }
int main(){
    int n;
    printf("Nhap so nguyen n:");
    scanf("%d",&n);
    int temp=1, sum=0;
    for (int i=1;i<=n;i++){
        temp=temp*i;
        sum+=temp;
    }
    printf("%d",sum);
    return 0;
}