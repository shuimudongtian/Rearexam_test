//
// Created by z lin zhang on 2018/10/19.
//
#include <stdio.h>
#include <string.h>
int main()
{

}

/* 对5阶矩阵赋值，使其成为上三角矩阵
 * int i,j,m;
    m=1;
    int a[5][5];
    for(i=0;i<5;++i){
        for(j=0;j<5;++j){
            if(i<j){
                a[i][j]=1;
            } else{
                a[i][j]=0;
               // m++;
            }
        }
    }

    for(int i=0;i<5;i++){
        for (int j = 0; j < 5; ++j) {
            printf("%-3d",a[i][j]);

        }
        printf("\n");
    }*/

/* 输入n,输出n行杨辉三角
 * int i,j,n;
    int a[N][N];
    printf("n:");
    scanf("%d",&n);
    for (int i = 1; i < n+1; ++i) {
        a[i][1]=1;
        a[i][i]=1;
    }

    for(i=3;i<n+1;++i)
        for (int j = 2; j < i; ++j) {
            a[i][j]=a[i-1][j-1]+a[i-1][j];
        }

    for (int i = 1; i < n+1; ++i) {
        for (int j = 1; j < i+1; ++j) {
            printf("%-3d",a[i][j]);
        }
        printf("\n");
    }*/

/*将输入的一个字符串，逆序打印出来
 * char str[30],m;
    gets(str);
    int i,j;
    for(i=0,j=strlen(str);i<j/2;i++,j--){
        m=str[i];
        str[i]=str[j-1];
        str[j-1]=m;
    }
    printf("%s",str);*/

/*  查找输入的字符串中的某个字符位置，并删除它。
 *   char str[10];
    char str1;
    int i,m;
    printf("enter a str:");
    gets(str);
    printf("enter a alpha:");
    str1=scanf("%c",&str1);
    for( i=0;str[i]!='\0';i++){
        if(str[i]==str1){
            printf("%c的位置是：%d",str1,i);
            m=i;
        }


    }

    puts(str);*/

/*冒泡
 * int a[5]={2,6,1,8,0};
for(int i=0;i<5;i++){
    for (int j = 0; j <5-1-i ; ++j) {
        int temp;
        if(a[j]>a[j+1]){
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
}
for(int i=0;i<5;i++){
    printf("%d ",a[i]);
}*/

/*直接插入排序
 * int i;
    for (int i = 1; i < 5; ++i) {
        if(a[i]<a[i-1]){
            int temp=a[i];
            a[i]=a[i-1];
            a[i-1]=temp;
        }
    }
    for (int j = 0; j < 5; ++j) {
        printf("%-3d",a[j]);
    }*/


/*二分查找
 * int a[8]={89,6,2,1,8,6,66,666};
int i,low,high,mid;
int k;
printf("请输入要查找的数字：");
k=scanf("%d",&k);
while (low<high){
    mid=(low+high)/2;
    if(a[mid]==k){
        return mid;
    }

    if(a[mid]>k){
        high=mid-1;
    }
    else
        low=high+1;
}*/

/*  输出的结果是
 * int x;
float y;
scanf("%2d",&x);
printf("%d,%f",x,y);*/

//比如输入867 67.0,输出的结果是：86,7.0

/* 输入一个字符串，并输入一个要删除的字符，并返回删除字符的位置。
 * char A[100];
    char a,b;
    printf("enter a string:");
    gets(A);
    printf("enter a alpha:");
    scanf("%c",&a);
    for(int i=0;i<strlen(A);++i){
        if(A[i]==a){
            printf("the location is：%d\n",i);
            for(int j=0;j<strlen(A);++j){
                if(A[j]!=a){
                    printf("%c",A[j]);
                } else
                    continue;
            }
            printf("\n");
        }
    }
*/

/*输出a\b\c中最大值和最小值
 * float a,b,c,max,min;
    printf("输入三个实数：");
    scanf("%f%f%f",&a,&b,&c);
    max=(a>b?a:b)>c?(a>b?a:b):c;
    min=(a>b?b:a)<c?(a>b?a:b):c;
    printf("max is: %f\n",max);
    printf("min is：%f",min);
 * */

/*不借助中间变量，用异或运算实现交换，两个数的值
 * int x=6,y=8,temp;
    x=x^y;
    y=x^y;
    x=x^y;
    printf("%d\n",x);
    printf("%d",y);*/