//
// Created by z lin zhang on 2018/10/17.
//


#define ABC(X) X*X

#include <stdio.h>
int main(){

    int a,k=3;
    a=++ABC(k+1);
    printf("%d",a);
}