#include<stdio.h>
#include<stdlib.h>
int main(void) {
 int i;
 int a,x;
 int n=8;
 int total[]={0,0,0,0,0,0,0,0};
 printf("��J8�ӫD�t���");
 for(i=0;i<8;i++){
     scanf("%d",&a);
     if(a<0){
          break;
     }
     total[i]=a;
 }
 printf("��J�j�M��");
 scanf("%d",&x);
 int location = 1;
 while(location <= n && total[location]!=x)
      location++;
 if(location > n){
      printf("�S���X�{�b�}�C��\n");
      location=0;
      printf("�g�L�F%d�����",(n));
 }
 else{
      printf("���X�{�b�}�C��\n");
      printf("�g�L�F%d�����",location);
 } 
 system("pause");
 return 0;
}
