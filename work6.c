#include<stdio.h>
#include<stdlib.h>
void bin(int n,int s[],int x,int location){
     int low,high,mid,sum=1;
     low =1;
     high =n;
     location =0;
     while(low<=high && location ==0){
          mid=((low+high)/2.0);
          if(x == s[mid]){
              location = mid;
              printf("在陣列中的%d",x);
          }
          else if (x<s[mid]){
              high=mid-1;
              sum++; 
          }
          else{
              low=mid+1;
              sum++; 
          }
                        
     }     
     printf("經過了%d次比較",sum);
}
int main(void) {
 int i;
 int a,x;
 int n=8;
 int total[]={0,0,0,0,0,0,0,0};
 printf("輸入8個非負整數");
 for(i=0;i<n;i++){
     scanf("%d",&a);
     if(a<0){
          break;
     }
     total[i]=a;
 }
 printf("輸入一個搜尋的值");
 scanf("%d",&x);
 bin(n,total,x,0);
 system("pause");
 return 0;
}
