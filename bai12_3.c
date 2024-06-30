#include<stdio.h>
#include<string.h>
int len(int cnt[], int n){
    int sum=0;
    for(int i=0;i<n;i++) if(cnt[i]) sum+=cnt[i];
    return sum;
}
int main(){
    char str[100];
    fflush(stdin);
    gets(str);
    int n=strlen(str);
    int cnt[n];
    for(int i=0;i<n;i++){
        if((str[i]<'a' || str[i]>'z') && (str[i]<'A' || str[i]>'Z')) str[i]=' ';
        cnt[i]=0;
    }
    int dem=0;
    for(int i=0;i<n;i++){
        if(str[i]!=' '){
            //đây là từ mới;
            int j=i;
            dem++;
            while(i<n && str[i] != ' '){ //Tính độ dài từ đó
                cnt[j]++;
                i++;
            }
        }
    }
    int k=len(cnt,n);
    char result[k+dem-1];
    for(int i=0;i<k+dem-1;i++) result[i]=' ';
    int start=0;
    for(int i=0;i<n;i++){
        if(cnt[i]){
            for(int l=i;l<i+cnt[i];l++){
                //gán từng từ vào chuỗi mới
                result[start]=str[l];
                start++;
            }
            start++;//Tạo khoảng cách giữa các từ
        }
    }
    result[start]='\0';
    printf("%s",result);
    return 0;   
}