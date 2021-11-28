#include <stdio.h>

int main(){
    int x;
    printf("请输入一个树：");
    scanf("%d", &x);
    printf("%d \n", x);
    if(x > 0){
        printf("这个数是正");
    }else if(x == 0){
        printf("这个数是零");
    }else{
        printf("这是一个负");
    }
    if(x%2 == 0){
        printf("偶数");
    }else{
        printf("奇数");
    }
    return 0;
}