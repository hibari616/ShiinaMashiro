#include<stdio.h>
#include<stdlib.h>
int sum (int n,int s[]){
       int i;
       int result;              
       result=0;
       for(i=0;i<n;i++)
           result=result+s[i];
       return result;
}
int main(void) {
 int i;
 int a,x;
 int n=8;
 int total[]={0,0,0,0,0,0,0,0};
 printf("輸入8個非負整數");
 for(i=0;i<8;i++){
     scanf("%d",&a);
     if(a<0){
          break;
     }
     total[i]=a;
 }
 printf("%d\n",sum(n,total));
 system("pause");
 return 0;
}
