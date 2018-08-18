#include<stdio.h>
#include<stdlib.h>
int main(void) {
 printf("Input  n 元(為5的倍數)");
 int a,b,c,i,n,sum;
 int d=0;
 scanf("%d",&sum);
 n=sum/5+1;
 if(n<2)
    printf("第%d個費氏數%d",n,n);
 else{ 
    a=0;
    b=1;
    for(i=2;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    printf("第%d個費氏數是%d\n",sum,c);
 }
 system("pause");
 return 0;
}
