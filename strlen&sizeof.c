//
// Created by z lin zhang on 2018/10/17.
//

#include <stdio.h>
#include <string.h>

int main(){
   // char str1[15]="good", str2[10]="morning";
   // printf("%s\n",strcat(str1,str2));
   // printf("%d\n",strlen(strcat(str1,str2)));
   // printf("%d\n",strlen("  good"));
   // printf("%d",sizeof("goog d"));
  // printf("%d", sizeof(int));
   struct A{
       int year,mon,dat;
   }a;
   //printf("%d", sizeof(a));
  char *s="13579";
  s++;
  printf("%c%c%c",*s,*(s+1),*s+1);
}