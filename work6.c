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
              printf("�b�}�C����%d",x);
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
     printf("�g�L�F%d�����",sum);
}
int main(void) {
 int i;
 int a,x;
 int n=8;
 int total[]={0,0,0,0,0,0,0,0};
 printf("��J8�ӫD�t���");
 for(i=0;i<n;i++){
     scanf("%d",&a);
     if(a<0){
          break;
     }
     total[i]=a;
 }
 printf("��J�@�ӷj�M����");
 scanf("%d",&x);
 bin(n,total,x,0);
 system("pause");
 return 0;
}
