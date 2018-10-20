//
// Created by z lin zhang on 2018/10/17.
//

#include <stdio.h>

int fun(int n){
    int i,sum=0;
    sum+=i;
    for(i=0;i<n;i++){
        fun(n);
    }
    return sum;

}

int main(){
    int n=5;
   // fun(n);
   // printf("%d",fun(n));

}