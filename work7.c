#include<stdio.h>
#include<stdlib.h>
int main(void) {
 printf("Input  n ��(��5������)");
 int a,b,c,i,n,sum;
 int d=0;
 scanf("%d",&sum);
 n=sum/5+1;
 if(n<2)
    printf("��%d�ӶO���%d",n,n);
 else{ 
    a=0;
    b=1;
    for(i=2;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    printf("��%d�ӶO��ƬO%d\n",sum,c);
 }
 system("pause");
 return 0;
}
