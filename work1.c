#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>
#define SWAP(x,y) {int t; t = x; x = y; y = t;} 
int count=0;
int partition(int[], int, int); 
void quickSort(int[], int, int); 
void mergeSort(int[], int, int[], int, int[]); 

int main(void) { 
    srand(time(NULL)); 
    int su1=10,su2=10,n=0;
	scanf("%d",&n);
    su1=n/2;
    su2=n-su1;
	int number1[n]; 
    int number2[su1];
    int number3[su2]; 

    printf("\nnumber1[]："); 
    int i;
    for(i = 0; i < n; i++) { 
        scanf("%d",&number1[i]);
    }
    for(i = 0; i < su1; i++) { 
        number2[i]=number1[i]; 
    } 
    for(i ; i < (su1+su2); i++) { 
        number2[i-su1]=number1[i]; 
    } 
    
    /*for(i = 0; i < su1; i++) { 
        printf("%d ",number2[i]);
    }
    for(i = 0; i < (su2-su1); i++) { 
        printf("%d ",number2[i-su1]);
    }*/
    
    quickSort(number1,0,su1-1); 
    quickSort(number2,0,su2-1); 

    printf("\n排序後："); 
    printf("\nnumber2[]："); 
    for(i = 0; i < su1; i++) 
        printf("%d ", number1[i]); 
    printf("\nnumber3[]："); 
    for(i = 0; i < su2; i++) 
        printf("%d ", number2[i]); 

    // 合併排序 
    mergeSort(number1,su1,number2,su2,number3); 

    printf("\n合併後："); 
    for(i = 0; i < su1+su2; i++){
        printf("%d ", number3[i]); 
	}
	printf("共排序%4d次",count);
    printf("\n"); 
    system("pause");
    return 0; 
} 

int partition(int number[], int left, int right) { 
    int s = number[right]; 
    int i = left - 1; 
    int j;
    for(j = left; j < right; j++) { 
        if(number[j] <= s) { 
            i++; 
            SWAP(number[i], number[j]); 
            count++;
        } 
    } 
    SWAP(number[i+1], number[right]); 
    return i+1; 
} 

void quickSort(int number[], int left, int right) { 
    if(left < right) { 
        int q = partition(number, left, right); 
        quickSort(number, left, q-1); 
        quickSort(number, q+1, right); 
        count++;
    } 
} 

void mergeSort(int number1[], int M, int number2[], 
                int N, int number3[]) { 
    int i = 0, j = 0, k = 0; 
    while(i < M && j < N) { 
        count++;
        if(number1[i] <= number2[j]) 
            number3[k++] = number1[i++]; 
        else 
            number3[k++] = number2[j++]; 
            
    } 
    
    while(i < M) {
        count++;
        number3[k++] = number1[i++];
        }
    while(j < N) {
        number3[k++] = number2[j++]; 
        count++;
        }
} 
