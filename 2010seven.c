//
// Created by z lin zhang on 2018/10/17.
//

#include <stdio.h>
int main(){

    int a,n;
    int sum=0;
    int temp=0;
    int count=1;
    printf("enter a and n:");
    scanf("%d %d",&a,&n);
    if(n<0){
        printf("enter error!\n");
        return -1;
    }
    else
        while(count<=n){
           temp=temp+a ;
           sum+=temp;
           a=10*a;
           count++;
        }
        printf("%d",sum);


}