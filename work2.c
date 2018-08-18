#include<stdio.h>
#include<stdlib.h>
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
 printf("輸入搜尋數");
 scanf("%d",&x);
 int location = 1;
 while(location <= n && total[location]!=x)
      location++;
 if(location > n){
      printf("沒有出現在陣列中\n");
      location=0;
      printf("經過了%d次比較",(n));
 }
 else{
      printf("有出現在陣列中\n");
      printf("經過了%d次比較",location);
 } 
 system("pause");
 return 0;
}
