//array with single dimension
#include<stdio.h>
int main(){
    int arr[]={7,5,3,9,12};  // 1D static array 
    printf("Printing array\n ");
    for(int i=0;i<5;i++){
        printf("arr[%d]=%d\n",i,arr[i]);
    }
    printf("Square of each element\n");
    for(int i=0;i<5;i++){
        printf("arr[%d]=%d\n",i,arr[i]*arr[i]);
    }
}