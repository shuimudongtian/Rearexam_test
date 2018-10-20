#include<stdio.h>
double fun(int n){
    double s;
    if(n==1)
        return 1;
    else
        s=n+fun(n-1);
}

int main() {
    double s=0;
    int n=2;
    fun(n);
    printf("%f",fun(n));
}
/*
 * int n, s = 0;
    printf("请输入一个正整数:");
    scanf("%d", &n);
    while (n) {
        s++;
        n /= 10;
    }
    printf("%d\n", s);
    return 0;
 */