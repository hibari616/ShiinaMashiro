#include<stdio.h>
#include<stdlib.h>
void change(int n,int s[]){
     int i,j,temp=0,sum=0,a;
     for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
           if(s[j]<s[i]){
               temp=s[j];
               s[j]=s[i];
               s[i]=temp;
               sum++;
                   printf("\n��%d���洫\n�}�C���e�G",sum);
               for(a=0;a<n;a++){
                   printf("%d ",s[a]);
               }
           }
     printf("\n�@�洫�F%d��\n",sum);
}
int main(void) {
 int i;
 int a,x;
 int n=5;
 int total[]={0,0,0,0,0};
 printf("��J5�ӫD�t���");
 for(i=0;i<5;i++){
     scanf("%d",&a);
     if(a<0){
          break;
     }
     total[i]=a;
 }
 change(n,total);
 system("pause");
 return 0;
}
