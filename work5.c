#include<stdio.h>
#include<stdlib.h>

void mat(int n,int a[][],int b[][],int c[][]);
int main(void) {
 int i,j,k,l;
 int a,x;
 int n=3;
 int totalA[3][3];
 int totalB[3][3];
 int totalC[3][3];
 printf("��J���3*3���x�}");
 for(i=0;i<n;i++){
     for(j=0;j<n;j++){
          scanf("%d",&a);
          if(a<0){
              break;
          }
          totalA[i][j]=a;
     }
 }
 for(k=0;k<n;k++){
     for(l=0;l<n;l++){
          scanf("%d",&a);
          if(a<0){
              break;
          }
          totalB[k][l]=a;
     }
 }
 mat(n,totalA,totalB,totalC);
 system("pause");
 return 0;
}
void mat(int n,int a[3][3],int b[3][3],int c[3][3]){
     int q=0,w=0,e=0,add=0,mul=0;
     for(q=0;q<n;q++){
         for(w=0;w<n;w++){
             c[q][w]=0;
             for(e=0;e<n;e++){
                 c[q][w]+=a[q][e]*b[e][w];
                 add++;
                 mul++;
             }
         }
     }
     for(q=0;q<n;q++){
         for(w=0;w<n;w++){
            printf("%d ",c[q][w]);
         }printf("\n");
     }
     printf("�@�ΤF%d�����k��%d���[�k",mul,add);
}
