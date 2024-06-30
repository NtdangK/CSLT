#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Nhap chuoi vao: ");
    fflush(stdin);
    gets(str);
    int cnt[256]={0};
    for(int i=0;i<strlen(str);i++){
        //đếm kí tự đó tương ứng kiểu int trong bảng ASCII
        cnt[str[i]]++;
    }
    for(int i=0;i<strlen(str);i++){
        //in tần suất theo thứ tự xuất hiện
        if(cnt[str[i]]){
            printf("%c %d\n",str[i],cnt[str[i]]);
            cnt[str[i]]=0;//chỉ in kí tự đó ra 1 lần
        }
    }
    return 0;
}