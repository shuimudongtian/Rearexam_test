//
// Created by z lin zhang on 2018/10/20.
//

#include <stdio.h>
#include <string.h>
#include <math.h>
//最大公约数和最小公倍数
void gongyueshu(){
    int m,n,r,p;
    printf("请输入两个整数：");
    scanf("%d %d",&m,&n);
    p=m*n;
    if(m<n){
        int temp=m;
        m=n;
        n=temp;
    }
    while (n!=0){
        r=m%n;
        m=n;
        n=r;
    }

    printf("%d\n",m);
    printf("%d",p/m);

}

void tongji(){
    char c;
    int letter=0,space=0,digit=0,other=0;
    printf("请输入一个字符串:");
    while ((c=getchar())!='\n'){
        if(c>='a'&&c<='z'||c>'A'&&c<='Z'){
            letter++;
        }
        else if(c==' ')
            space++;
        else if(c>='0'&&c<='9')
            digit++;
        else
            other++;

    }
    printf("字母：%d,空格：%d,数字：%d,其他：%d,词语：%d",letter,space,digit,other,space+1);
}

void aaa(int a,int n){
    int i=1,sn=0,tn=0;
    printf("请输入a和n:");
    scanf("%d %d",&a,&n);
    while (i<=n){
        tn=tn+a;
        sn=sn+tn;
        a=a*10;
        ++i;
    }

    printf("a+aa+aaa+....=%d",sn);


}

int main(){
  
}