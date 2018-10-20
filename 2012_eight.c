//
// Created by z lin zhang on 2018/10/17.
//

#include <stdio.h>
#include <string.h>

#define Size 5
int main(){
    char A[Size];
    char *ch=A ;
    char b;
    int i;
    printf("enter a string:");
    scanf("%s",A);
   // puts(A);
   for(int i=0;i<strlen(A);i++){
       printf("%c",A[i]);
   }
   printf("\n");
    printf("enter a alpha:");
    b=scanf("%c",&b);
    for(ch=A;*ch!=NULL;++ch){
        if(*ch==b){
            printf("位置是：%d",i+1);
        }
    }

}